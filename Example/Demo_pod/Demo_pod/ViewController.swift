//
//  ViewController.swift
//  Demo_pod
//
//  Created by Ketan on 13/11/20.
//

import UIKit
import HaptikCommerce
import AVFAudio
import AVFoundation

class ViewController: UIViewController, HPExternalEvent {
    
    let revAsr = ReverieASR()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        HaptikCommerceLib.sharedSDK.delegate = self
        
        let permission = AVAudioSession.sharedInstance().recordPermission;
        AudioPermission()
        revAsr.setup()
        
    }
    
    func startRecording(_ status: Bool) {
        switch status {
            
        case true:
            revAsr.startRecording()
            print("{{{{-- Recording Start --}}}")

        case false:
            revAsr.stopRecording()
            print("||||-- Recording Stoppped --||||")
        }
    }

    func didReceiveHaptikError(_ error: NSError) {
        print("Demo:: received event : \(error.localizedDescription)")
    }
    
    func didReceiveHaptikEvent(_ eventData : String) {
        print("Demo:: received event : \(eventData)")
    }
    
    @IBAction func launchPressed(_ sender: Any) {
        
        let attributes  =    HPCommerceAttributesBuilder.build {  (builder) in
            
            builder.category = "grocery"
            builder.voiceFirst = true
            builder.TTSEngine = .reverieTTS
            builder.TTSVoiceType = .standard
            builder.ASREngine = .thirdParty
        }
        
        HaptikCommerceLib.sharedSDK.loadConversation(launchController: self, attributes: attributes)
    }
}

func AudioPermission()   {
    AVCaptureDevice.requestAccess(for: .audio) { granted in
        if granted {
            // Access to the microphone is granted
            print("Microphone access granted")
            // You can start using the microphone here
        } else {
            // Access to the microphone is denied
            print("Microphone access denied")
            // Handle denial - perhaps show an alert to the user explaining why access is needed
        }
    }
    
}
