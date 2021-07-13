//
//  zeroMatrix.cpp
//  testing
//
//  Created by Tallan Groberg on 6/28/21.
//

#include <stdio.h>


#include <iostream>
using namespace std;

const int n = 4;
const int m = 3;


void printMatrixNM(int arr[n][m]) {
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << " | " <<  arr[i][j];
        }
        cout << " |" <<  endl;
        
    }
    
    cout << endl;
}

void setRow(int arr[n][m],int i) {
    
    for(int k = 0; k < m; k++) {
        arr[i][k] = 0;
    }
}

void setCol(int arr[n][m],int j) {
    
    for(int k = 0; k < m; k++) {
        arr[k][j] = 0;
//        printMatrixNM(arr);
    }
}

void find0(int arr[n][m]) {
    
    int modRow = -1;
    int modCol = -1;
    
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m;j++) {
            if(arr[i][j] == 0 && i != modRow && modCol != j) {
                setRow(arr, i);
                modRow = i;
                setCol(arr, j);
                modCol = j;
            }
        }
    }
}


