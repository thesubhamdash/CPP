#include<iostream>
using namespace std;

void BintoDec(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow = 1; // 2^0, 2^1,...

    while (n > 0){
        int last = n % 10;
        decNum += last * pow;
        pow *= 2;
        n /= 10;
    }

    cout << decNum << endl;
}

int main(){
    BintoDec(101);
    return 0;
}