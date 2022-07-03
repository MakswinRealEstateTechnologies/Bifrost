//
//  ViewController.swift
//  BifrostTestApp
//
//  Created by Alkın Çakıralar on 2.06.2022.
//

import UIKit
import Bifrost
import Combine
import Foundation

class ViewController: UIViewController {
    
    @IBOutlet var lbl: UILabel!
            
    override func viewDidLoad() {
        super.viewDidLoad()

        print("\(Greeting().greeting())")
        
    }

    @IBAction func btnClicked(_ sender: UIButton) {
    }
    
}
