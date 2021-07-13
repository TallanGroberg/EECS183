//
//  compressString.cpp
//  testing
//
//  Created by Tallan Groberg on 6/25/21.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

string compress(string orig) {
    string mod = "";
    
    int letters[128];
    
    fill(letters, letters + 128, 0);
    
    int dubs[128];
    
    fill(dubs, dubs + 128, 0);
    
    
    
    for (int i = 0; i < orig.size(); i++) {
        letters[orig.at(i)]++;
        
        if(dubs[orig.at(i)] < 1) {
            dubs[orig.at(i)]++;
        }
    }
    for (int i = 0; i < orig.size(); i++) {
        
        if(dubs[orig.at(i)] > 0){
            mod += orig.at(i);
            mod +=  to_string(letters[orig.at(i)]);
            dubs[orig.at(i)]--;
        }

    }
    
    return mod;
    
}
    
    
//    cout << compress("aabcc")<< endl;
//
//    cout << compress("aaabbbbbcccccc") << endl;
//
//    cout << compress("asdfasdfffdsasdffddfssfasdffds") << endl;
//
