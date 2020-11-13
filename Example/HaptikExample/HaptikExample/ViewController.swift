//
//  ViewController.swift
//  HaptikExample
//
//  Created by Ketan on 11/11/20.
//

import UIKit


class ViewController: UIViewController {
    func didReceiveHaptikEvent(_ eventData: String) {
        
    }
    
    func didReceiveHaptikError(_ error: NSError) {
        
    }
    

    @IBOutlet weak var launchButton: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        self.launchButton.layer.cornerRadius = 75;
       
    }

    @IBAction func launchPressed(_ sender: Any) {
    }
    
}

