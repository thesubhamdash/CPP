#include<iostream>
using namespace std;

int DecToBinary(int decNum){
    int ans=0, pow=1;

    while (decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;
        ans += rem*pow;
        pow *= 10;
    }

    return ans; // binary form of number
}

int main(){
    int decNum=50;
    cout << DecToBinary(decNum) << endl;
    for (int i=1; i<=10; i++){
        cout << DecToBinary(i) << endl;
    }
    return 0;
}