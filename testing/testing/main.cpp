#include <iostream>
using namespace std;
int getStudentPoints(int studentCount);



int main() {

    cout << endl;
   cout << getStudentPoints(2) << endl;

   return 0;
}

int getStudentPoints(int studentCount) {
    cout << "Enter grades: " << endl;
    int grades = 0;
    int sum = 0;
    
    while(cin >> sum && studentCount > 1) {
        studentCount--;
        grades += sum;
    }
    
   
    
    
    return grades;
}

