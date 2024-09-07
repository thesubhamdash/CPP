#include<iostream>
using namespace std;

int main(){
    bool isAdult; //1 or 0
    int age;
    cout << "enter your age: ";
    cin >> age;

    isAdult = (age>=18) ? true : false;
    cout << isAdult;
    return 0;
}