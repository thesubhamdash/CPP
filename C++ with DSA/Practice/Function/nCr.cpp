#include<iostream>
using namespace std;

int fact(int a){
    int fact=1;
    for (int i=1; i<=a; i++){
        fact *= i;
    }
    return fact;
}

int Permutation(int n, int r){
    int nPr = (fact(n)/fact(n-r));
    return nPr;
}

int Combination(int n, int r){
    int nCr = (fact(n)/(fact(n-r)*fact(r)));
    return nCr;
}

int main(){
    int n=10, r=5;
    cout << Permutation(n,r) << endl;
    cout << Combination(n,r) << endl;
    return 0;
}