//
//  offByOne.cpp
//  testing
//
//  Created by Tallan Groberg on 6/25/21.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


bool removeByOne(string orig, string mod) {
    
    int count1 = 0;
    int count2 = 0;
    while(orig.size() < count1 && mod.size() < count2) {
        if (orig.at(count1) != mod.at(count2)) {
            if(count1 != count2) {
                return false;
            }
            count2++;
        } else {
            count1++;
            count2++;
        }
    }
    return true;
}

bool offByOne(string orig, string mod) {
    int count = 0;
    for(int i = 0; i < orig.size(); i++) {
        if (orig.at(i) != mod.at(i)) {
            count++;
        }
        
        if(count > 1) return false;
    }
    
    return true;
}

bool isOff(string orig, string mod) {
    

    if(orig.size() > mod.size()) {
        return removeByOne(orig, mod);
    } else if(mod.size() > orig.size()) {
        return removeByOne(mod, orig);
    } else if(orig.size() == mod.size()) {
        return offByOne(orig, mod);
    }
    
    return false;
}
//cout << "('pale', 'ple') Expect: 1" << endl;
//cout << "                Actual: " << isOff("pale", "ple") << endl;
//
//cout << "('pales', 'pale') Expect: 1" << endl;
//cout << "                Actual: " << isOff("pales", "pale") << endl;
//
//cout << "('pale', 'bale') Expect: 1" << endl;
//cout << "                Actual: " << isOff("pale", "bale") << endl;
//
//cout << "('pale', 'bake') Expect: 0" << endl;
//cout << "                Actual: " << isOff("pale", "bake") << endl;
//
//cout << "('pale', 'paley') Expect: 0" << endl;
//cout << "                Actual: " << isOff("pale", "bake") << endl;
