#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter the year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
            cout << year << " is a leap year";
    }
    else {
        cout << year << " is a not leap year";
    }
    return 0;
}