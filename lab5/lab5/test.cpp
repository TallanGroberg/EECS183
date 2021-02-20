/**
 * test.cpp
 *
 * EECS 183
 * Lab 5: loops exercises
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * <#A description of the assignment here#>
 */

#include "loops.h"

#include <iostream>
using namespace std;

void testPrintRectangle();
void test_printRight();
void test_printRightJustified();
void test_printIsosceles();

int main() {
    
    // TODO
    // Once you have completed the testing functions
    // call them such that the tests actually get run
    testPrintRectangle();
    test_printRight();
    test_printRightJustified();
    test_printIsosceles();

    return 0;
}

void testPrintRectangle() {
    cout << "Testing printRectangle()" << endl;
    
    cout << "(8,8): Expected: ********" << endl;
    cout << "                 ********" << endl;
    cout << "                 ********" << endl;
    cout << "                 ********" << endl;
    cout << "                 ********" << endl;
    cout << "                 ********" << endl;
    cout << "                 ********" << endl;
    cout << "                 ********" << endl;
    cout << "Actual:        " << endl << endl;
    printRectangle(8, 8);
    
    
    
    cout << "(1,1): Expected: *" << endl;
    cout << "         Actual: "; printRectangle(1,1);
    

    
    cout << "(2,3): Expected:  ***" << endl;
    cout << "                  ***" << endl;
    cout << "         Actual: "  << endl; printRectangle(2,3);
    
}

// TODO
// Implement your other test_functions

void test_printRight() {
    cout << "test_printRight   " << endl << endl;
    cout << "(3): Expected:  *" << endl;
    cout << "                **" << endl;
    cout << "                ***" << endl;
    cout << "         Actual: "  << endl;
    printRight(3);
    
    
    cout << "(2): Expected:  *" << endl;
    cout << "                **" << endl;
    cout << "       Actual: "  << endl;
    printRight(2);
    
    cout << "(1): Expected:  " << endl;
    cout << "       Actual: "  << endl;
    printRight(1);
    
    
}

void test_printRightJustified() {
    cout << "(1): Expected:  *" << endl;
    cout << "       Actual:  *"  << endl;
    printRightJustified(1);
    
    cout << "(2): Expected:  *" << endl;
    cout << "               **"  << endl;
    cout << "       Actual: "  << endl;
    printRightJustified(2);
    
    cout << "(3): Expected:  *" << endl;
    cout << "               **"  << endl;
    cout << "              ***"  << endl;
    cout << "       Actual: "  << endl;
    printRightJustified(3);
}

void test_printIsosceles() {
    cout << "test_printIsosceles: " << endl;

    
    printIsosceles(3);
};




