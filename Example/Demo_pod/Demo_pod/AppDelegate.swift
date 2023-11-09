//
//  AppDelegate.swift
//  Demo_pod
//
//  Created by Ketan on 13/11/20.
//

import UIKit
import HaptikCommerce

@main
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    var window: UIWindow?
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        // Setup Google Services
        HaptikCommerceLib.sharedSDK.setupGoogle(apiKey: "Your_Google_Key");
        
        // Setup Reverie Services
        HaptikCommerceLib.sharedSDK.setupReverie(apiKey: "576d6c0d4f547153d8123ed88db2101a4e5e6698", appId: "Reverie_AppId", domain: "Reverie_Domain")
        
        return true
    }
    
}

