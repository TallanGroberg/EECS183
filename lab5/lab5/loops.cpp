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

using namespace std;

/**
 * TODO
 * Implement all loops.h functions:
 * printRectangle, printRight, printRightJustified, printIsosceles
 */

void printRectangle(int row, int col) {
    
    string wholeRow;
    
    for (int i = 0; i < row; i++) {
        wholeRow = "";
        for (int j = 0; j < col; j++) {
            wholeRow += '*';
        }
    }
}
