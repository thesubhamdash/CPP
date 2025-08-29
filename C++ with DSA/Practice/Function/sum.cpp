#include<iostream>
using namespace std;

int sum(int a, int b){
    int sum=0;
    sum = a + b;
    return sum;
}

int main(){
    cout << "The sum is: " << sum(3,5);
}