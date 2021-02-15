//
//
//
////
////  coinCounter.cpp
////  testing
////
////  Created by Tallan Groberg on 1/26/21.
////
//
//#include <iostream>
//#include<string>
//#include<cmath>
//#include<cassert>
//using namespace std;
//
//string pluralize(string singluar, string plural, double amount) {
//    if(amount > 1 || amount == 0){
//        return plural;
//    } else {
//        return singluar;
//    }
//    
//    
//    
//}
//
////change to string
//string changeBack(double change){
//    
//    int dollars = change * 100;
//    int dollar = 100;
//    
//    
//    int ones = 0;
//    int quarter = 0;
//    int quarts = 0;
//    int dime = 0;
//    int nickel = 0;
//    int penney = 0;
//    int coin = dollar;
//    
//    while (dollars > 0){
//        if(dollars > 100)
//        {
//            ones++;
//        }
//        if(dollars <= 100 && dollars > 25)
//        {
//            quarter++;
//            coin = 25;
//        }
//        if(dollars <= 25 && dollars > 10)
//        {
//            dime++;
//            coin = 10;
//        }
//        if(dollars <= 10 && dollars > 5)
//        {
//            nickel++;
//            coin = 5;
//        }
//        if(dollars < 5)
//        {
//            penney++;
//            coin = 1;
//        }
//        dollars = dollars - coin;
//    };
//    
//    
//    
//    
//    
//
//  
//        
//    
//    
//                    
//    
//    
//    
//    string moneys = to_string(ones) + " " +
//                    pluralize("dollar", "dollars", ones) + ", " +
//                    to_string(quarter) + " " +
//                    pluralize("quarter", "quarters", quarter) + ", " +
//                    to_string(dime) + " " +
//                    pluralize("dime", "dimes", dime)  + ", " +
//                    to_string(nickel)  + " " +
//                    pluralize("nickel", "nickels", nickel) + ", " +
//                    to_string(penney)  + " " +
//                    pluralize("penney", "pennies", penney);
//
//    return moneys;
//}
//
//void test_change_back(){
//
//    
//
//    
//    assert(changeBack(1.34) == "1 dollar, 1 quarter, 0 dimes, 1 nickel, 4 pennies");
//   assert(changeBack(2.34) == "2 dollars, 1 quarter, 0 dimes, 1 nickel, 4 pennies");
//   assert(changeBack(2.64) == "2 dollars, 2 quarters, 1 dime, 0 nickels, 4 pennies");
//   assert(changeBack(2.61) == "2 dollars, 2 quarters, 1 dime, 0 nickels, 1 penney");
//   assert(changeBack(2.71) == "2 dollars, 2 quarters, 2 dimes, 0 nickels, 1 penney");
//   assert(changeBack(37.99) == "37 dollars, 3 quarters, 2 dimes, 0 nickels, 4 pennies");
//    
//
//}
//
//
//
//int main(int argc, const char * argv[]) {
//
//
//    changeBack(13.45);
//
//
//    return 0;
//}
//
