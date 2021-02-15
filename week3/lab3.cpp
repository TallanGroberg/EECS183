/**
 * lab3.cpp
 * 
 * <Tallan >
 * <tgroberg#>
 * 
 * EECS 183:Lab 3
 * Debugging the Code
 *
 * <#description#>
 */

#include <iostream>
#include <string>
using namespace std;

/**
  * Requires: Nothing.
  * Modifies: Nothing.
  * Effects:  Returns the sum of the happiness and numPets.
  *
  * Notes:    There are bugs in the code below!
 */
int petPet(int happiness, int numPets) {
	// local variable to store updated happiness value
	int newHappiness = 0;

	// increase and return dog happiness
	newHappiness = numPets;
	return newHappiness;
}

/**
  * Requires: Nothing.
  * Modifies: Nothing.
  * Effects:  Returns the value of hunger minus food.
  *
  * Notes:    There are bugs in the code below!
 */
int feedPet(int hunger, int food) {
	// local variable to store updated hunger
	int newHunger = 0;

	// decrease and return dog hunger
	hunger = newHunger - food;
	return hunger;
}

int main() {
	cout << endl << "TamagotchEECS Pet Simulator" << endl;

	// enter the starting pet data
	cout << "Please enter pet name: ";
	string petName = "";
	getline(cin, petName);

	cout << endl << "Please enter pet initial hunger: ";
	int hunger = 0;
	cin >> hunger;

	cout << endl << "Please enter pet initial happiness: ";
	int happiness = 0;
	cin >> happiness;

	cout << endl << "Please enter number to be used for feeding and petting: ";
	int careForPet = 0;
	cin >> careForPet;
	
	// Notes: There are bugs in the code below!

	// call helper functions to update pet data
	int newHunger = feedPet(careForPet, hunger);
	int newHappiness = petPet(careForPet, happiness);

	// dispay the updated pet data
	cout << endl << "After caring for " << petName;
	cout << ", current hunger is: " << newHappiness;
	cout << " and happiness is: " << newHunger;
	cout << endl;
	cout << "Thanks for using TamagotchEECS Pet Simulator! Good luck!" << endl;

	return 0;
}
