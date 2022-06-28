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
import KMPNativeCoroutinesRxSwift

class ViewController: UIViewController {
    
    @IBOutlet var lbl: UILabel!
            
    override func viewDidLoad() {
        super.viewDidLoad()
               
        let rep = HelpRepository()
        
        let req = AddFeedBackRequest(type: .bug, note: "")
        
        let observable = createObservable(for: rep.testNative(request: req))
        
        let disposable = observable.subscribe(onNext: { value in
            print("Received value: \(value)")
        }, onError: { error in
            print("Received error: \(error)")
        }, onCompleted: {
            print("Observable completed")
        }, onDisposed: {
            print("Observable disposed")
        })
        
        disposable.dispose()

        
    }
    
    /*
     // Create a single for the suspend function
     let single = createSingle(for: randomLettersGenerator.getRandomLettersNative())

     // Now use this single as you would any other
     let disposable = single.subscribe(onSuccess: { value in
         print("Received value: \(value)")
     }, onFailure: { error in
         print("Received error: \(error)")
     }, onDisposed: {
         print("Single disposed")
     })

     // To cancel the suspend function just dispose the subscription
     disposable.dispose()
     */

    @IBAction func btnClicked(_ sender: UIButton) {
    }
    
}
