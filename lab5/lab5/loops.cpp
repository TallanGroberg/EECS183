/**
 * loops.cpp
 *
 * EECS 183
 * Lab 5: Loops exercises
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * <#A description of the assignment here#>
 */

#include "loops.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/**
 * TODO
 * Implement all loops.h functions:
 * printRectangle, printRight, printRightJustified, printIsosceles
 */

void printRectangle(int row, int col) {
    

    
    for (int i = 0; i < row; i++) {
        
        for (int j = 0; j < col; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

void printRight(int n) {
    string wholeRow;
    
    for (int i = 0; i < n; i++) {
        wholeRow += '*';
        cout << wholeRow;
        cout << endl;
    }
}

void printRightJustified(int n) {
  
    
    int i, j, rows;

     rows = n;
     for (i = 1; i <= rows; i++)
     {
         for (j = 1; j <= rows - i; j++)
         {
             cout << " ";
         }

         for (j = 1; j <= i; j++)
         {
             cout << '*';
             
         }
         cout << endl;
     }
}

void printIsosceles(int n) {
    string line = "";
    
    // make print 3 by 5
    
    //replace all on the close side.
    int space;
    int rows = n;
    int k;
    

        

        for(int i = 1; i <= rows; ++i) {
            
            for(space = 1; space <= rows - i; space++)
            {
                cout << " ";
            }

            for(k = 0; k < 2 * i - 1; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
    
};
