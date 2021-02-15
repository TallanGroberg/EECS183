#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{

    double nums[] = {0.03, 0.06,0.2 , 0.06, 0.2, 0.15, 0.07, 0.045, 0.7, 0.025, 0.03, 0.025};
    double mean = 0;

    for(int i = 0; i < 12; i++) {
        mean += nums[i];
    }
    mean = mean /12;
    double q1 = mean /4;
    double q3 = mean * 3/4;

    cout << mean << endl;
    cout << q1 << endl;
    cout << q3 << endl;


    return 0;
}
