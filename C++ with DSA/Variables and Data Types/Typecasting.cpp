#include<iostream>
using namespace std;

int main (){

        //IMPLICIT CONVERSION
    cout << (10/3) << "\n";         //3
    cout << (10/3.0)<< "\n";      //3.33


        //EXPLICIT CONVERSION
    cout << char('A') << "\n";
    cout << int('A') << "\n";
    cout << ((float)10/3);

    return 0;
}