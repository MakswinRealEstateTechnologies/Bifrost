//
//  ViewController.swift
//  BifrostTestApp
//
//  Created by Alkın Çakıralar on 2.06.2022.
//

import UIKit
import Bifrost
import KMPNativeCoroutinesAsync
import KMPNativeCoroutinesRxSwift
import KMPNativeCoroutinesCore

class ViewController: UIViewController {
    @IBOutlet var lbl: UILabel!
    
    let miscService = MiscService()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        miscService.getLanguages { response, err in
            
            if err != nil {
                print(err?.localizedDescription ?? "")
            }
            
            if response?.status == .success {
                
                response?.data?.data.forEach({ item in
                    print("\(item.id)")
                })
                
            }
            
            self.lbl.text = response?.data?.data.first?.value.lowercased()
            
        }
        
    }

    @IBAction func btnClicked(_ sender: UIButton) {
        
        miscService.getLanguages { response, err in
            
            if err != nil {
                print(err?.localizedDescription ?? "")
            }
            
            if response?.status == .success {
                
                response?.data?.data.forEach({ item in
                    print("\(item.id)")
                })
                
            }
            
            self.lbl.text = response?.data?.data[3].value.lowercased()
            
        }
        
    }
    
    override func didMove(toParent parent: UIViewController?) {
        //if parent == nil { viewModel.onCleared() }
    }
    
}
