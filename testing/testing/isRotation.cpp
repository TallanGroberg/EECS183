//
//  isRotation.cpp
//  testing
//
//  Created by Tallan Groberg on 6/29/21.
//

#include <stdio.h>

#include <iostream>
using namespace std;


bool isRotation(string s1, string s2) {
    int fs = 0;
    bool foundStart = false;
    
    if(s1 == s2) return true;
    if(s1.size() != s2.size()) return false;
    
    for(int i = 0; i < s1.size();i++) {
        
        if(fs > 0 && foundStart) {
            if(s1.at(fs) == s2.at(i)) {
                fs++;
            } else {
                return false;
            }
        }
        
        if(s1.at(0) == s2.at(i) && foundStart == false) {
            fs++;
            foundStart = true;
        }
        
        if(fs == s1.size()) return true;
        
        if(i == s1.size() - 1 && fs != s1.size()) {
            i = -1;
        }
    }
    
    
    
    return true;
}

//cout << "expected: 1" << endl;
//cout << "actual:  " << isRotation("waterbottle","erbottlewat")<< endl;
//
//cout << "expected: 1" << endl;
//cout << "actual:  " << isRotation("waterbottle","rbottlewate")<< endl;
//
//cout << "expected: 0" << endl;
//cout << "actual:  " << isRotation("waterbottle","ebottlewat")<< endl;
//
//cout << "expected: 0" << endl;
//cout << "actual:  " << isRotation("waterbottle","waterbotle") << endl;
//
//cout << "expected: 0" << endl;
//cout << "actual:  " << isRotation("waterbottle","elttobretaw") << endl;
