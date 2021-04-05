//
//  intarr.cpp
//  testing
//
//  Created by Tallan Groberg on 3/26/21.
//

#include <stdio.h>
#include <iostream>

#include <fstream>
using namespace std;

const int MAX_ROWS = 3;
   const int MAX_COLS = 3;



void initArr(int arr[MAX_ROWS][MAX_COLS], int rowSize,int colSize) {
  
    
    for (int i = 0;  i < MAX_ROWS; i++) {
        
        for(int j = 0; j < MAX_COLS; i++) {
            
            if(i == 0 || i == (rowSize - 1) || j == 0 || j == (colSize - 1)) {
                arr[i][j] = 0;
            } else {
                arr[i][j] = 1;
            }
        }
    }
}




int intarr() {


    int arr[3][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };
    
    cout << "Expect: " << endl;
    cout << " {0, 0, 0}," <<  endl;
    cout << "{0, 1, 0}," << endl;
    cout << "{0, 0, 0}" << endl;
    
    cout << "Actual" << endl;
    
    initArr(arr, 3,3);
    
    for (int i = 0;  i < 3; i++) {
        
        for(int j = 0; j < 3; i++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    
    

   return 0;
}

