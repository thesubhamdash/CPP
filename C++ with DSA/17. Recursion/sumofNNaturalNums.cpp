#include<iostream>
using namespace std;

int sumN(int n){
    int sum=0;
    if(n==1){
        return 1;
    }
    sum = n + sumN(n-1);
    return sum;
}

int main(){
    cout << sumN(5) << endl;;
    return 0;
}