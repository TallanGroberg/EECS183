//
//  main.cpp
//  testing
//
//  Created by Tallan Groberg on 4/11/21.
//


#include <iostream>
using namespace std;

#include <unordered_map>








// Driver code
void findPairs()
{
   
    
    int a[] = {
        13,27,35,40,49,55,59
    };
    int b[] = {
       17,35,39,40,55,58,60
    };
    
    int pairs = 0;
    
    int size = sizeof(a)/ sizeof(a[0]);
    int count = 0;
    
 
   
    
    
    for(int i = 0; i < size ; i++) {
       
 
        if(a[i] > b[count] ) {
      
            count++;
        }
        if(a[i] == b[count]) {
            count++;
            pairs++;
        
        }
        
        
        
        
        
        
        
    }
  
    
    cout << endl << pairs << " Pairs exist in the two arrays" << endl;
    
    


}
