#include<iostream>
using namespace std;

int sumofDigits(int n){
    int sum=0;
    while (n>0){
        int last = n % 10;
        sum+= last;
        n /= 10;
    }
    return sum;
}

int main(){
    int n=143;
    cout << sumofDigits(n);
    return 0;
}