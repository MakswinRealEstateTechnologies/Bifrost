//
//  ViewController.swift
//  BifrostTestApp
//
//  Created by Alkın Çakıralar on 2.06.2022.
//

import UIKit
import shared

class ViewController: UIViewController {
    
    @IBOutlet var lbl: UILabel!
            
    override func viewDidLoad() {
        super.viewDidLoad()
        
        MiscellaneousRepository().languages { response, err in
            print("\(response?.data?.languages.count)")
        }
        
        //MiscellaneousRepository()
        
    
    }

    @IBAction func btnClicked(_ sender: UIButton) {
    }
    
    override func didMove(toParent parent: UIViewController?) {
    }
    
}
