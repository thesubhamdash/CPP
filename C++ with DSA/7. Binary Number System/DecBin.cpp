#include<iostream>
using namespace std;

int DecToBinary(int decNum){
    int n = decNum;
    int pow = 1; //10^0, 10^1,...
    int binNum = 0;

    while (n>0){
        int rem = n % 2;
        binNum += rem * pow;
        pow *= 10;
        n = n/2;
    }

    cout << binNum << endl;
}

int main(){
    DecToBinary(5);
    return 0;
}