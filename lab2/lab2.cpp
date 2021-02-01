/**
 * lab2.cpp
 * 
 * <#Tallan Groberg#>
 * <#tgroberg#>
 * 
 * EECS 183:Lab 2
 *
 * <#talked about how to make a basic program I couple common pit falls and useful tips for project 1#>
 */

#include<iostream>
using namespace std;

int main(int argc, char const * argv[])
{
    /* code */
    int puppies = 20;

    int adoptions;

    cout << "Pug Adoption Program" << endl;

    cout << "How many Pugs will be adopted today? "<< endl;

    cin >> adoptions;

    puppies = puppies - adoptions;

    cout << "Pugs remaining: " << puppies;

    return 0;
}
