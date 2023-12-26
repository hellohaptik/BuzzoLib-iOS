//
//  ReverieModule.swift
//  Demo_pod
//
//  Created by Ketan Doiphode on 23/12/23.
//

import Foundation
import Starscream
import AVFoundation
import HaptikCommerce

class ReverieASR  {
    
    private let APIKey      = <#Your Reverie API Key#>
    private let AppID       = <#Your Reverie App ID#>
    private let STTDomain   = "ecomm"
    private let AppName     = "stt_stream"
    private let SilanceTime = "2"
    private let language    = "en"
    
    var isConnected = false
    var socket : WebSocket?
    var engine = AVAudioEngine()
    var inputNode : AVAudioInputNode!
    
    private var recognizerLanguage : String?
    
    lazy var downAudioFormat: AVAudioFormat = {
        let avAudioChannelLayout = AVAudioChannelLayout(layoutTag: kAudioChannelLayoutTag_Mono)!
        return AVAudioFormat(
            commonFormat: .pcmFormatInt16,
            sampleRate: 16000.0,
            interleaved: true,
            channelLayout: avAudioChannelLayout)
    }()
    
    var  urlStr : String { "wss://revapi.reverieinc.com/stream?src_lang=\(language)&domain=\(self.STTDomain)&apikey=\(self.APIKey)&appname=\(self.AppName)&appid=\(self.AppID)&silence_detected=\(self.SilanceTime)" }
    
    fileprivate func setupSocket() {
        var request = URLRequest(url: URL(string: urlStr)!)
        request.setValue("websocket", forHTTPHeaderField: "Upgrade")
        request.setValue("revapi.reverieinc.com", forHTTPHeaderField: "Host")
        request.setValue("http://revapi.reverieinc.com", forHTTPHeaderField: "Origin")
        request.setValue("13", forHTTPHeaderField: "Sec-WebSocket-Version")
        request.setValue("Upgrade", forHTTPHeaderField: "connection")
        request.timeoutInterval = 30
        socket = WebSocket(request: request, certPinner: nil)
        socket?.delegate = self
        socket?.connect()
    }
    
    func setup() {
        
        setupSocket()
        engine = AVAudioEngine()
        inputNode = engine.inputNode
    }
    
    func startRecording()  {
        let audioSession = AVAudioSession.sharedInstance()
        
        do {
            try AVAudioSession.sharedInstance().setCategory(AVAudioSession.Category.playAndRecord, mode: .default, options: .defaultToSpeaker)
            try audioSession.setMode(AVAudioSession.Mode.measurement)
            try audioSession.setActive(true, options: .notifyOthersOnDeactivation)
        } catch {
         
//            self.delegate?.speechProcessorAbort()
            return
        }
        

        if recognizerLanguage == nil  {
            setupSocket()
        }
        
        guard isConnected == true else {
            return
        }
//        isListening = true
//        self.SPEngineDelegate?.playSound(sound: .recordStart)
        let inputFormat = inputNode.outputFormat(forBus: 0)
        let recordingFormat = AVAudioFormat(commonFormat: AVAudioCommonFormat.pcmFormatInt16, sampleRate: 16000, channels: 1, interleaved: false)
        let formatConverter =  AVAudioConverter(from:inputFormat, to: recordingFormat!)
        
        let downSampleRate: Double = downAudioFormat.sampleRate
        let ratio: Float = Float(inputFormat.sampleRate)/Float(downSampleRate)
        
        inputNode.removeTap(onBus: 0)
        inputNode.installTap(onBus: 0, bufferSize: 999999999, format: inputFormat) { (buffer, time) in
            
            let capacity = UInt32(Float(buffer.frameCapacity)/ratio)
            
            if let pcmBuffer = AVAudioPCMBuffer(pcmFormat: recordingFormat!, frameCapacity: capacity) {
                var error: NSError? = nil
                
                let inputBlock: AVAudioConverterInputBlock = {inNumPackets, outStatus in
                    outStatus.pointee = AVAudioConverterInputStatus.haveData
                    return buffer
                }
                
                formatConverter?.convert(to: pcmBuffer, error: &error, withInputFrom: inputBlock)
                
                let data = self.toNSData(PCMBuffer: pcmBuffer)
                
                OperationUtilities2.delay(delay: 0.5) {
                    print("88888 \(data)")
                    self.socket?.write(data: data) {
                        self.inputNode.reset()
                    }
                }
            }
        }
        
        self.engine.prepare()
        
        do
            {
                try self.engine.start()
            }
        catch
        {
            print(error.localizedDescription)
        }
    }
    
    func stopRecording()  {
        engine.reset()
        engine.stop()
        deleteAudio()
    }
    
    func deleteAudio() {
        let dirPaths = FileManager.default.urls(for: .documentDirectory,
                                                in: .userDomainMask)
        
        do {
            let fileURLs = try FileManager.default.contentsOfDirectory(at: dirPaths[0],
                                                                       includingPropertiesForKeys: nil,
                                                                       options: .skipsHiddenFiles)
            for fileURL in fileURLs {
                if fileURL.pathExtension == "wav" {
                    try FileManager.default.removeItem(at: fileURL)
                }
            }
        } catch  { print(error) }
    }
    
    func dispose()  {
        socket = nil
        inputNode = nil
       
    }
    
    deinit {
        print("Reverie ASR Engine deinit")
    }
}

extension ReverieASR : WebSocketDelegate {

    func didReceive(event: Starscream.WebSocketEvent, client: Starscream.WebSocket) {
        switch event {
        case .connected(let headers):
            isConnected = true
            recognizerLanguage = language
            print("websocket is connected: \(headers)")
        case .disconnected(_, _):
            isConnected = false
        case .text(let text):
            if let str = text.toJSON(), let displayText = str["display_text"] as? String, displayText != "" {
//                self.delegate?.partialResults(displayText)
                HaptikCommerceLib.sharedSDK.updateSpeechInput(inputText: displayText, final: false)
            }
            
            if let str = text.toJSON(), let displayText = str["display_text"] as? String, let final = str["final"] as? Bool, final {
//                isListening = false
//                if( displayText != "" ) {
                HaptikCommerceLib.sharedSDK.updateSpeechInput(inputText: displayText, final: true)
//                }
                self.inputNode.reset()
                self.inputNode.removeTap(onBus: 0)
                self.engine.stop()
                socket?.disconnect()
                OperationUtilities2.delay(delay: 0.5) {
                    self.socket?.connect()
                }
            }
            
            print("Received text: \(text)")
        default:
            break
        }
    }
    
    //========
    
    func toNSData(PCMBuffer: AVAudioPCMBuffer) -> Data {
        let channels = UnsafeBufferPointer(start: PCMBuffer.int16ChannelData, count: Int(PCMBuffer.frameLength))
        let ch0Data = Data(bytes: channels[0], count:Int(PCMBuffer.frameCapacity * PCMBuffer.format.streamDescription.pointee.mBytesPerFrame))
        return ch0Data
    }
    
}

class OperationUtilities2 {
    class func delay(delay: Double, closure: @escaping () -> ()) {
        DispatchQueue.main.asyncAfter(deadline: .now() + delay) {
            closure()
        }
    }
}

