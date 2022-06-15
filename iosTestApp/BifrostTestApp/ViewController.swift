//
//  ViewController.swift
//  BifrostTestApp
//
//  Created by Alkın Çakıralar on 2.06.2022.
//

import UIKit
import Bifrost

class ViewController: UIViewController {
    
    @IBOutlet var lbl: UILabel!
            
    override func viewDidLoad() {
        super.viewDidLoad()
        
        MiscellaneousRepository.init().languages { response, err in
            
            response?.data?.languages.forEach({ item in
                print(item.key)
            })
            
        }
        
        MiscellaneousRepository.init().test23()
        
    }

    @IBAction func btnClicked(_ sender: UIButton) {
    }
    
    override func didMove(toParent parent: UIViewController?) {
    }
    
}
