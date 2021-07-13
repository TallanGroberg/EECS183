//
//  isPalinPerm.cpp
//  testing
//
//  Created by Tallan Groberg on 6/23/21.
//

#include <stdio.h>
#include <string>

using namespace std;

bool isPalinPerm(string orig, string mod) {
    
    int letters[128];
    
    fill(letters, letters + 128, 0);
    
//    O(x)
    
    for (int i = 0; i < orig.size(); i++) {
        if(orig.at(i) == ' ' && mod.at(i) != ' ') return false;
            letters[orig.at(i)]++;
    }
    
    for (int i = 0; i < mod.size();  i++) {
        letters[mod.at(i)]--;
    }
    
    for (int i = 0; i < orig.size(); i++) {
        if(letters[mod.at(i)] != letters[orig.at(i)]) return false;
    }
    
    
    return true;
}
