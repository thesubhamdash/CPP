#include<iostream>
#include<math.h>
using namespace std;

int fastExponentiation(int base, int power){
    int ans = 1;
    while(power > 0){
        int last = power & 1;
        if(last){
            ans *= base;
        } 
        base = pow(base,2);
        power = power >> 1;
    }
    return ans;
}

int main(){
    cout << fastExponentiation(3,5);
    return 0;
}