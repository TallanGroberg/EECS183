#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    double mean;
    double nums[] = {2, 1.4, 4, 3, 2.2};
    double standardDeviation = 0;
    double arraySize = *(&nums + 1) - nums;

    for (int i = 0; i < arraySize; i++){ mean = (nums[i] + mean);}
    mean = mean/ arraySize;
    for (int i = 0; i < arraySize; i++){
        standardDeviation += pow((nums[i] - mean), 2);
    }
    standardDeviation = sqrt(standardDeviation / arraySize);
    cout << standardDeviation << endl;
    return 0;
}
