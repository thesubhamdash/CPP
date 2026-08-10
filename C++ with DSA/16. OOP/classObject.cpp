#include<iostream>
using namespace std;

class Student{
    public:
        //Properties:
        string name;
        float cgpa;

        // Methods / Functions
        void getPercentage(){
            cout << cgpa*10 << endl;
        }
};

int main(){
    //Object created Statically
    Student s1;
    s1.cgpa = 8;
    s1.getPercentage();

    //Object created dynamically
    Student* s2 = new Student();
    s2->cgpa=9;
    s2->getPercentage(); 
    return 0;
}