#include<iostream>
using namespace std;

int fact (int num){
    int fact=1,i;

    for (i=1; i<=num; i++){
        fact = fact * i;
    }
    return fact;
}

int Combination (int n, int r){
    int val1 = fact(n);
    int val2 = fact(r);
    int val3 = fact(n-r);

    int Selection = val1 / (val2 * val3);
    return Selection;
}

int main(){
    cout << Combination (10,4);
}