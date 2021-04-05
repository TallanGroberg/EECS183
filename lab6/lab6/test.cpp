/**
 * test.cpp
 *
 * tallan
 * tgroberg
 *
 * EECS 183: Lab 6 - Exam Review
 *
 * Testing functions for your isValidPin.cpp implementation.
 * Holds the definition of required testing function.
 * We have stubbed the required function for you.
 *
 * NOTE: You WILL submit this file to the autograder
 */

#include <iostream>
#include <string>

using namespace std;

bool isValidPin(int pin);

void testisValidPin() {

//    cout << "testisValidPin: " << endl;
//    cout << "(12345): Expected: 1" << endl;
//    cout << "           Actual: " << isValidPin(12345);
//    
//    cout << "testisValidPin: " << endl;
//    cout << "(1234): Expected: 0" << endl;
//    cout << "           Actual: " << isValidPin(1234);
    
    cout << "testisValidPin: " << endl;
    cout << "(123456): Expected: 0" << endl;
    cout << "           Actual: " << isValidPin(123456);
    
    cout << "testisValidPin: " << endl;
    cout << "(11345): Expected: 0" << endl;
    cout << "           Actual: " << isValidPin(11345);
    
    cout << "testisValidPin: " << endl;
    cout << "(11345): Expected: 1" << endl;
    cout << "           Actual: " << isValidPin(71386);
    
    

    return;
}


