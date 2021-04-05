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
        string line = "";
        
        for (int j = 0; j < col; j++) {
            line += '*';
        }
        cout << line << endl;
    }
}

void printRight(int n) {
    string line;
    
    for (int i = 0; i < n; i++) {
        line += '*';
        cout << line << endl;
    }
}

void printRightJustified(int n) {
    string line = "";

   
     for (int i = 1; i <= n; i++) {
         line = "";
         
         for (int j = 1; j <= n - i; j++) {
             line += " ";
         }

         for (int j = 1; j <= i; j++) {
             line += '*';
             
         }
         cout << line << endl;
     }
}

void printIsosceles(int n) {
    string line = "";
    
    double te = 1000.;

        for(int i = 1; i <= n; ++i) {
            line = "";
            
            for(int j = 1; j <= n - i; j++)
            {
                line += " ";
            }

            for(int k = 0; k < 2 * i - 1; k++)
            {
                line += "*";
            }
            cout << line << endl;
        }
    
};


