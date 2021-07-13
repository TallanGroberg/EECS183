//
#include <iostream>
using namespace std;

string urlify(string orig) {
    
    string mod;
    
    for (int i = 0;i < orig.size();i++) {
        if(orig.at(i) == ' '){
            mod += "%20";
        } else {
            mod += orig.at(i);
        }
    }
    
    return mod;
}
