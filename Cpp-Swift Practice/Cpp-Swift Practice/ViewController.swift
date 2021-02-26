//
//  ViewController.swift
//  Cpp-Swift Practice
//
//  Created by denny on 2021/02/26.
//

import UIKit

class ViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let cppItem = GreetingWrapper();
        
        cppItem.helloWorld()
        print(cppItem.getText() ?? "nil")
        cppItem.setText("This is test string")
        print(cppItem.getText() ?? "nil")
        
        
        let cppItem2 = GreetingWrapper(text: "Hi my name is cpp");
        print(cppItem2?.getText() ?? "nil")
        
        cppItem2?.setNumber(33)
        print(cppItem2?.getNumber() ?? "nil")
    }
    
    
}

