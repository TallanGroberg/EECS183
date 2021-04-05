#include <iostream>

#include <fstream>
using namespace std;

const int MAX_ROWS = 3;
   const int MAX_COLS = 3;



class Student {
public:
    Student(string name, int dgpa) {
        first_name = name;
        gpa = dgpa;
    }
    void print() {
        cout << "gpa " << gpa << " name " << first_name << endl;
    }
private:
    string first_name;
    double gpa;
    
};


int main() {

    Student anna("anna" , 4.0) ;
    anna.print();
    

   return 0;
}

