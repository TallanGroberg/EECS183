/**
 * lab6.cpp
 *
 * EECS 183: Lab 6 - Exam Review
 *
 * main() function for the lab assignment
 *
 * NOTE: You will NOT submit this file to the autograder
 */
#include <iostream>
#include <string>

void testcalculateFrequency();
void testisValidPin();
int calculateFrequency(int num, int d);
void registerPin();

using namespace std;


/* Requires: name1 and name2 are non-empty
 * Modifies: cout
 * Effects:  Determines who goes first and returns that player's name.
 *           Both players roll one die, and the player who rolls the
 *           higher value goes first. All ties need to be resolved by
 *           both players rolling again.
 *           Note: a tie is when both players roll the same number.
 * Outputs the prompt:
 *           "Each player, please roll a die to determine who goes first"
 *            This prompt is printed only once.
 */
string whoGoesFirst(string name1, string name2);

string whoGoesFirst(string name1, string name2) {
    cout << "Each player, please roll a die to determine who goes first"
         << endl;
    int p1Roll = rand() % 6 + 1;
    int p2Roll = rand() % 6 + 1;
    string goesFirst;
    
    while(p1Roll == p2Roll) {
        
         p1Roll = rand() % 6 + 1;
         p2Roll = rand() % 6 + 1;
       
    }
    
        if(p1Roll > p2Roll) {
            goesFirst = name1;
        } else {
            goesFirst = name2;
        }
    return goesFirst;
}


/* Requires: pointNumber is between [1,6] inclusive
 * Modifies: nothing
 * Effects:  player rolls two dice.
 *           Gains a point for each die that matches the pointNumber.
 *           Returns the number of points gained.
 * For example, playersTurn(4) means the player earns a point for
 *           each die that rolls a 4. The player rolls two dice.
 *           If they roll:
 *             2 and 5: they earn 0 points; function returns 0
 *             4 and 5: they earn 1 point;  function returns 1
 *             4 and 4: they earn 2 points; function returns 2
 */
int playersTurn(int pointNumber);


int playersTurn(int pointNumber) {
    int points = 0;
    
    for(int i = 0; i < 3; i++) {
        int roll = rand() % 6 + 1;
        if(roll == pointNumber) {
            points++;
        }
    }

    return points;
}

string calcWinner(int firstScore, int otherScore, string firstPlayer, string otherPlayer) {
    string winner;
    
    if(firstScore >= otherScore) {
        winner = firstPlayer;
    } else {
        winner = otherPlayer;
    }
    
    if(firstScore >= 11) {
        winner = firstPlayer;
    }

    return winner;
}






int main() {
    string nameX, nameY;
       string firstPlayerName, otherPlayerName;
       int pointNumber;
      
       cout << "Please enter the name of one player: ";
       cin >> nameX;
       cout << "Please enter the name of the other player: ";
       cin >> nameY;
       
       // figure out who goes first
    firstPlayerName = nameX;
    
       // assign otherPlayerName, depending on the value of firstPlayerName
       if (firstPlayerName == nameX) {
           otherPlayerName = nameY;
       }
       else {
           otherPlayerName = "j doe";
       }
       
       // figure out the 'pointNumber'
       pointNumber = rand() % 6 + 1;
       
       // Play the game.
       // Play continues until a player scores 11 or more points.
       int firstScore = 0, otherScore = 0;
       int round = 1;
       while (firstScore <= 11 && otherScore <= 11) {
           cout << "Round: " << round << endl;
           cout << "----------" << endl;
           
           // first player's turn
           firstScore += playersTurn(pointNumber);
           cout << firstPlayerName << " points: " << firstScore << endl;
       
           // other player's turn
           otherScore += playersTurn(pointNumber);
           cout << otherPlayerName << " points: " << otherScore << endl << endl;
           round++;
      
       }
      
       // announce the winner
       cout << "Winner is: " ;
    cout << calcWinner(firstScore, otherScore, firstPlayerName, otherPlayerName);
      
       return 0;
}


/**
* Requires: nothing
* Modifies: nothing
* Effects : executes premade test cases for calculateFrequency
*
* Note:     You will NOT need to write more test cases
**/
void testcalculateFrequency() {
    cout << "Testing calculateFrequency()\n";

    // test cases where frequency is 0
    int num = 9;
    int d = 1;
    int frequency = 0;
    int testResult = calculateFrequency(num, d);
    if (testResult != frequency) {
        cout << "\nFAILED: calculateFrequency(" << num << ", " << d << ")\n"
            << "Expected return value: " << frequency << endl
            << "Actual return value: " << testResult << endl;
    }

    num = 123;
    d = 0;
    testResult = calculateFrequency(num, d);
    if (testResult != frequency) {
        cout << "\nFAILED: calculateFrequency(" << num << ", " << d << ")\n"
            << "Expected return value: " << frequency << endl
            << "Actual return value: " << testResult << endl;
    }

    num = 222222;
    d = 9;
    testResult = calculateFrequency(num, d);
    if (testResult != frequency) {
        cout << "\nFAILED: calculateFrequency(" << num << ", " << d << ")\n"
            << "Expected return value: " << frequency << endl
            << "Actual return value: " << testResult << endl;
    }

    // test cases where frequency is 1
    num = 123;
    d = 2;
    frequency = 1;
    testResult = calculateFrequency(num, d);
    if (testResult != frequency) {
        cout << "\nFAILED: calculateFrequency(" << num << ", " << d << ")\n"
            << "Expected return value: " << frequency << endl
            << "Actual return value: " << testResult << endl;
    }

    num = 1231234123;
    d = 4;
    frequency = 1;
    testResult = calculateFrequency(num, d);
    if (testResult != frequency) {
        cout << "\nFAILED: calculateFrequency(" << num << ", " << d << ")\n"
            << "Expected return value: " << frequency << endl
            << "Actual return value: " << testResult << endl;
    }

    // test cases where frequency > 1
    num = 1231234123;
    d = 1;
    frequency = 3;
    testResult = calculateFrequency(num, d);
    if (testResult != frequency) {
        cout << "\nFAILED: calculateFrequency(" << num << ", " << d << ")\n"
            << "Expected return value: " << frequency << endl
            << "Actual return value: " << testResult << endl;
    }

    num = 100100110;
    d = 0;
    frequency = 5;
    testResult = calculateFrequency(num, d);
    if (testResult != frequency) {
        cout << "\nFAILED: calculateFrequency(" << num << ", " << d << ")\n"
            << "Expected return value: " << frequency << endl
            << "Actual return value: " << testResult << endl;
    }

    // test cases where frequency == #digits
    num = 222222;
    d = 2;
    frequency = 6;
    testResult = calculateFrequency(num, d);
    if (testResult != frequency) {
        cout << "\nFAILED: calculateFrequency(" << num << ", " << d << ")\n"
            << "Expected return value: " << frequency << endl
            << "Actual return value: " << testResult << endl;
    }

    num = 33333333;
    d = 3;
    frequency = 8;
    testResult = calculateFrequency(num, d);
    if (testResult != frequency) {
        cout << "\nFAILED: calculateFrequency(" << num << ", " << d << ")\n"
            << "Expected return value: " << frequency << endl
            << "Actual return value: " << testResult << endl;
    }

    cout << "Finished testing calculateFrequency()\n";
    return;
}

