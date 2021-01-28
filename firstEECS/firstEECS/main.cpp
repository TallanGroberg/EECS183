//
//  main.cpp
//  firstEECS
//
//  Created by Tallan Groberg on 1/19/21.
//
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here..
    int nums[] = {9, 8, 2, 6, 9, 4,1, 0, 8, 6, 1, 2, 8, 5, 3, 3, 5, 6,7, 8, 9, 0,};
    
 
   
        
        
        for(int i = 0; i < 22; i++)
        {
            
                
            if(nums[0] > nums[1])
            {
                int temp = nums[0];
                nums[0] = nums[1];
                nums[1] = temp;
                i = 0;
            }
            
            
            if(i < 22 && nums[i] > nums[i + 1])
            {
                int temp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
                i = 0;

            }
            
            if( i > 20 && nums[21] < nums[i - 1])
            {
                int temp = nums[i];
                nums[i] = nums[i - 1];
                nums[i - 1] = temp;
                i = 19;
            }

        }
    for(int i = 0; i < 22; i++)
    {
        cout << nums[i] << endl;
    }
    
    
    return 0;
}
