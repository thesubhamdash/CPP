#include<iostream>
using namespace std;

int main(){
    int income;
    float tax=0;
    cout << "Enter your annual income: ";
    cin >> income;

    if (income < 500000){
        tax = (0 * income /100);
        cout << "Taxation Amount is: " << tax;
    }
    else if ((income > 500000) && (income < 1000000)){
        tax = (20 * income /100);
        cout << "Taxation Amount is: " << tax;
    }
    else{
        tax = (30 * income /100);
        cout << "Taxation Amount is: " << tax;
    }
    return 0;
}