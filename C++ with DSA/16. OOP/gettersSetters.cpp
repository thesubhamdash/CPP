#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    float cgpa;
    
    public:
        void getPercentage(){
            cout << cgpa*10 << endl;
        }
    
    //Setters
    void setName(string nameval){
        name = nameval;
    }

    void setCgpa(float cgpaval){
        cgpa = cgpaval;
    }

    //Getters
    string getName(){
        return name;
    }

    float getCgpa(){
        return cgpa;
    }
};

int main(){
    Student s1;

    //setters
    s1.setName("Subham");
    s1.setCgpa(9.1);
    
    //getters
    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;
    return 0;
}