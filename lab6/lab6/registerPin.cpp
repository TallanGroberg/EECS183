/**
 * registerPin.cpp
 *
 * tallan
 * tgroberg
 *
 * EECS 183: Lab 6 - Exam Review
 *
 * Holds the definition registerPin function.
 * We have stubbed the required function for you.
 *
 * NOTE: You WILL submit this file to the autograder
 */

#include <iostream>
#include <string>

using namespace std;

bool isValidPin(int pin);

/**
* Requires: nothing
* Modifies: nothing
* Effects : repeatedly prompt a user until they enter a valid pin
*
* Sample run: user input is followed by <enter>
*             denoting the user presseing enter
*
*   Please enter a pin:
*   123<enter>
*   Invalid pin. Use exactly five non-repeating digits.
*   Please enter a pin:
*   11335<enter>
*   Invalid pin. Use exactly five non-repeating digits.
*   Please enter a pin:
*   12345<enter>
*   Your pin has been registered. Thank you!
**/
void registerPin() {
    const string PIN_PROMPT = "\nPlease enter a pin:";
    const string INVALID_PROMPT = "\nInvalid pin. Use exactly five non-repeating digits.";

    cout << PIN_PROMPT << endl;
    int pin = 0;
    cin >> pin;
    bool isValid = !isValidPin(pin);
    
   

    // TODO: implement event-based loop to get valid pin
    while(isValid) {
        cout << INVALID_PROMPT << endl;
        cout << endl;
        cout << PIN_PROMPT << endl;
        cin >> pin;
        isValid = !isValidPin(pin);
    }

    cout << endl << "Your pin has been registered. Thank you!" << endl;
    return;
}
