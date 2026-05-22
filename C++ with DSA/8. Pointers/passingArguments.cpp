#include<iostream>
using namespace std;

// pass by value
// void changeA(int param){
//     param = 20;
//     cout << param << endl;
// }

// pass by reference using address
void changeA(int *ptr){
    *ptr = 20;
    cout << *ptr << endl;
}

// pass by reference using reference variable
void changeA(int &param){
    param = 30;
    cout << param << endl;
}

int main(){
    int a = 10;
    // cout << "After pass by value" << endl;
    // changeA(a);
    // cout << a << endl;
    cout << "After pass by reference using Address" << endl;
    changeA(&a);
    cout << a << endl;
    cout << "After pass by reference using Address" << endl;
    changeA(a);
    cout << a << endl;
    return 0;
}