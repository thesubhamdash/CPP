#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;

    cout << a << endl;
    cout << ptr << endl;
    cout << pptr << endl;
    cout << &a << endl;
    cout << *(&a) << " Dereferencing operator" << endl;  // Dereferencing operator
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << **pptr << endl;


    int *ptrr = NULL;
    cout << *ptrr << endl;
    return 0;
}