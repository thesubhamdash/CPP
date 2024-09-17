#include<iostream>
using namespace std;

int prod (int a, int b){
    int prod = a * b;
    cout << prod << endl;
    return prod;
}

int main(){
    prod (4,4);
    return 0;
}