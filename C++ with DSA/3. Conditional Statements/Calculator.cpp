#include<iostream>
using namespace std;

int main (){
    int a;
    cout << "Enter first number: ";
    cin >> a;

    int b;
    cout << "Enter second number: ";
    cin >> b;
    
    char operation;
    cout << "Enter the operation: ";
    cin >> operation;

    switch(operation){
        case '+': cout << "a+b= " << (a+b);
            break;
        case '-': cout << "a-b= " << (a-b);
            break;
        case '*': cout << "a*b= " << (a*b);
            break;
        case '/': cout << "a/b= " << (a/b);
            break;
        default: cout << "INVALID";
    }
    return 0;
}