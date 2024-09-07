#include<iostream>
using namespace std;

int main() {
    cout << "Unary Operators" << endl;
    int a = 5;
    // a = a + 1;
    // a++;
    // cout << a << endl;
    // a--;
    // cout << a << endl;

    /*POST INCREMENT OPERATOR "a++"
        First the value is used and then increment is done.
    */

    int b = a++;    
    cout << "a=" << a << endl;    
    cout << "b=" << b << endl;

    /*PRE INCREMENT OPERATOR "a++"
        First the increment is done and then new value is used.
    */
    b = ++a;
    cout << "a=" << a << endl;    
    cout << "b=" << b << endl;
    
    return 0;
}