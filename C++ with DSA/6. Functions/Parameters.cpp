#include<iostream>
using namespace std;

int sum(int a, int b) { // a & b are parameters
    int sum = a + b;
    return sum;
}

int diff(int a, int b) { 
    int diff = a - b;
    return diff;
}

int main(){
    int s = sum(4,2);   // 4 and 2 are arguments
    cout << s << endl;

    int d = diff(4,2);   
    cout << d << endl;
    
    return 0;
}