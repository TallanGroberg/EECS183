//
//  main.cpp
//  testing
//
//  Created by Tallan Groberg on 4/11/21.
//


#include <iostream>
using namespace std;


int n = 8;
 int bishop[8][8];
int knight[8][8];
 void printMatrix(int arr[8][8]);
 
void bishopMoves(int arr[8][8], int row, int col) {
        for(int i = 0; i < n; i++) {
       for(int j = 0; j < n; j++) {
           
           if( (i + row) - (j + col) == 0) {
               arr[i][j] = 1;
           } else {
               arr[i][j] = 0;
           }
           
           if( (i - col) + (j - row) == 0) {
               arr[i][j] = 1;
           }
       }
   }
 
}

void knightMoves(int arr[8][8], int srow, int scol,int erow,int ecol){
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; i < 8; i++) {
            arr[i][j] = 0;
        }
    }
    
    arr[srow][scol] = 2;
    
        // down 2, left 1
    arr[srow + 2][scol - 1] = 1;
    
        // down 2, right 1
    arr[srow + 2][scol + 1] = 1;
    
        // down 1, left 2
    arr[srow + 1][scol - 2] = 1;
    
        // down 1, right 2
    arr[srow + 1][scol + 2] = 1;
    
        // down 1, left 2
    
    arr[srow + 1][scol -2] = 1;
    
        // up 2, left 1
    arr[srow - 2][scol - 1] = 1;

//        //up 2, right 1
    arr[srow - 2][scol + 1] = 1;
//
//        //up 1, left 2
    arr[srow - 1][scol - 2] = 1;
//
//        //up 1, right 2
    arr[srow - 1][scol + 2] = 1;
    
    
    
    
    
    
}

void printMatrix(int arr[8][8]) {
   for (int i = 0; i < 8; i++) {
       for (int j = 0; j < 8; j++) {
           cout << " | " <<  arr[i][j];
       }
       cout << " | " <<  endl;
   }
   cout << endl;
}




int main()
{

//    bishopMoves(bishop, 0, 0);
//    printMatrix(bishop);
//
//
//    bishopMoves(bishop, 7, 0);
//    printMatrix(bishop);
//
//
//    bishopMoves(bishop, 4, 4);
//    printMatrix(bishop);
//
//    bishopMoves(bishop, 2, 6);
//    printMatrix(bishop);
//
//    knightMoves(knight, 0, 0, 2, 1);
//    printMatrix(knight);
    
    knightMoves(knight, 5, 4, 4, 2);
    printMatrix(knight);
    

    

    
    

    
//    insert_after(head, 1);
    

    
    
    return 0;
}
