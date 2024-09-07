#include<iostream>
using namespace std;

int main (){

        //IMPLICIT CONVERSION
    cout << (10/3) << "\n";         //3
    cout << (10/3.0)<< "\n";      //3.33


        //EXPLICIT CONVERSION
    cout << char('A') << "\n";
    cout << int('A') << "\n";
    cout << ((float)10/3) << "\n";;

    cout << bool(3)+2 << "\n";  // 3 because any value of bool other than 0(FALSE) becomes 1(TRUE)
                            // so, bool(3)=1;   1+2=3

    cout << (23.5 + 2 + 'A') << "\n";   // greatest is double or float. So, all other changes to double or float
                                    // Ans- 90.5
    return 0;
}