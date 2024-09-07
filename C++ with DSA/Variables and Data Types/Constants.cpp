#include<iostream>
using namespace std;

        // variables that cannot be changed

int main(){
    const int n = 25;   //must be initialized in the same line.
    const float PI = 3.14;

    cout << n <<"\n";
    cout << PI;


                    //NOT ALLOWED
    // const int n;
    // n=25;

    return 0;
}