//
//  Ext-Str.swift
//  Demo_pod
//
//  Created by Ketan Doiphode on 20/12/23.
//

import Foundation

extension String {
    
    /// Converts string json to Dictionary
    /// - Returns: returns dictionary object if json is valid
    func toJSON() -> [String: Any]? {
        if let data = self.data(using: .utf8) {
            do {
                return try JSONSerialization.jsonObject(with: data, options: []) as? [String: Any]
            } catch {
                print(error.localizedDescription)
            }
        }
        return nil
    }
    
    /// Retrieves stores value against provided key
    /// - Parameter key: string key
    init?(key: String) {
        guard let str = UserDefaults.standard.string(forKey: key) else {
            return nil
        }
        self.init(str)
    }
    
    /// Stores string value in `UserDefaults`
    /// - Parameter key: Key against stored value
    func storeUserDefault(key: String) {
        UserDefaults.standard.set(self, forKey: key)
        UserDefaults.standard.synchronize()
    }
    
    
    /// Validates if string is valid URL
    /// - Returns: Validation result
    func isValidUrl() -> Bool {
        let urlRegEx = "^(https?://)?(www\\.)?([-a-z0-9]{1,63}\\.)*?[a-z0-9][-a-z0-9]{0,61}[a-z0-9]\\.[a-z]{2,6}(/[-\\w@\\+\\.~#\\?&/=%]*)?$"
        let urlTest = NSPredicate(format:"SELF MATCHES %@", urlRegEx)
        let result = urlTest.evaluate(with: self)
        return result
    }
}
