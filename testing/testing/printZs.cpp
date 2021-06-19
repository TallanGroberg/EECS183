//
//  makeZ.cpp
//  testing
//
//  Created by Tallan Groberg on 4/7/21.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int printZs() {
    int gridRow = 6;
    int gridCol = 6;
    
    bool grid[gridRow][gridCol];
    
    for (int i = 0; i < gridRow; i++) {
        for(int j = 0; j < gridCol; j++) {
            if(i == 0) {
                grid[i][j] = true;
            } else if(i == gridRow - 1) {
                grid[i][j] = true;
            }else if(j - i == 0 ) {
                grid[i][j] = true;
            } else {
                grid[i][j] = false;
            }
        }
    }
    
    for (int i = 0; i < gridRow; i++) {
        for(int j = 0; j < gridCol; j++) {
            
            cout << " | " << grid[i][j];
        }
        
        cout << endl;
    }
    
    
    
    
    
    return 0;
}
