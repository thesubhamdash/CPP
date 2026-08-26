#include<iostream>
using namespace std;

int ApowB(int a, int b){    //O(n)
    if(b == 0){
        return 1;
    }
    int ans=1*a;
    ans *= ApowB(a,b-1);
    return ans;
}

int XpowN(int x, int n){    //O(logn)
    if(n==0){
        return 1;
    }

    int halfPow = XpowN(x,n/2);
    int halfPowSq = halfPow * halfPow;

    if(n%2!=0){
        return x * halfPowSq;
    }

    return halfPowSq;
}

int main(){
    cout << XpowN(2,10);
    return 0;
}