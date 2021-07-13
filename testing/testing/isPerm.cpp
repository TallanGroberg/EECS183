//
//  isPerm.cpp
//  testing
//
//  Created by Tallan Groberg on 6/21/21.
//

#include <stdio.h>
#include <string>
using namespace std;

bool isPerm(string original, string perm) {
    
    //O(N)
    if(original.size() != perm.size()) return false;
    
    int letters[128];
    fill(letters, letters + 128, 0);
    
     
    for(int i = 0; i < original.size() ; i++){
        letters[original.at(i)]++;
    }
    
    for(int i = 0; i < perm.size();i++){
        if(letters[perm.at(i)]--){
            if(letters[perm.at(i) < 0]) {
                return false;
            }
        }
    }
    
    return  false;
}
    
    
