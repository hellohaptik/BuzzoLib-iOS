//
//  ViewController.swift
//  Demo_Manual
//
//  Created by Ketan on 13/11/20.
//

import UIKit
import HaptikCommerce

class ViewController: UIViewController, HPExternalEvent {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }
    
    @IBAction func launchPressed(_ sender: Any) {
        
        let attributes  =    HPAttributesBuilder.build {  (builder) in
            
            builder.category = "grocery"
            builder.voiceFirst = true
            builder.TTSEngine = .appleNative
            builder.TTSVoiceType = .wavenet
            builder.ASREngine = .appleNative
        }
        
        HaptikCommerceLib.sharedSDK.loadConversation(launchController: self, attributes: attributes)
    }
    
    //    Haptik Delegates
    func didReceiveHaptikError(_ error: NSError) {
        print("Demo:: received event : \(error.localizedDescription)")
    }
    
    func didReceiveHaptikEvent(_ eventData : String) {
        print("Demo:: received event : \(eventData)")
    }

}

