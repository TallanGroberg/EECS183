/**
 * isValidPin.cpp
 *
 * <#Name#>
 * <#Uniqname#>
 *
 * EECS 183: Lab 6 - Exam Review
 *
 * Holds the definition isValidPin function.
 * We have stubbed the required function for you.
 *
 * NOTE: You WILL submit this file to the autograder
 */

#include <iostream>
#include <string>

using namespace std;

int calculateFrequency(int num, int d);

/**
* Requires: pin has no leading zeros
* Modifies: nothing
* Effects : (1) returns false if pin has less than five digits;
*           (2) returns false if pin has more than five digits;
*           (3) returns false if pin has a repeating digit;
*           (4) returns true if pin contains exactly five
*               non-repeating digits;
**/
bool isValidPin(int pin) {
    
    int count = 0;
    int nums[5];
    int length;
    
  
        while(pin > 0) {
            int temp = pin % 10;
            nums[count] = temp;
            pin /= 10;
            count++;
        }
    length = sizeof(nums) / sizeof(nums[0]);
    
    if(length == 5 && count == 5) {
        
        for(int i = 0; i < 5; i++) {
            
            if(nums[i] == nums[i + 1]){
                i = 5;
            }
            
            if(i < 4 && nums[i] > nums[i + 1]) {
                
                int temp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
                i = -1;
            }
            
            if(i == 4) {
                return true;
            }
        }
    }
    
    
    
    return false;
}

