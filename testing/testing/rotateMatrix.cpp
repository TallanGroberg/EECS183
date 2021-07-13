//
//  rotateMatrix.cpp
//  testing
//
//  Created by Tallan Groberg on 6/26/21.
//

#include <stdio.h>

#include <iostream>
using namespace std;

const int n = 5;

void printMatrix(int arr[n][n]) {
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << " | " <<  arr[i][j];
        }
        cout << " |" <<  endl;
        
    }
    
    cout << endl;
}

void change90Degrees(int arr[n][n]) {
    
    int count = 0;
    
    int switched[n][n] = {{0,0,0},{0,0,0},{0,0,0}};
    
    for(int i = 0; i < n / 2;i++) {
        
        
        
        
        
        
        
        
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            if(i == j ) break;
            
            switched[i][j]++;
            switched[j][i]++;
            if( ((2 * i) + (2 * j) ) % 2 == 0) {
               
            
            
                int temp = arr[i][j];
                
                arr[i][j] = arr[j][i];
                
                arr[j][i] = temp;
            }
            printMatrix(arr);
//            printMatrix(switched);
//            count++;
        }
        
    }
    cout  << endl << count << endl;
    
}
