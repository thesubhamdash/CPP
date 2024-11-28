#include<iostream>
using namespace std;

// bool Powerof2(int x){
//     if (x<=0){
//         return false;
//     }
//     while (x>1) {
//         if (x % 2 != 0){
//             return false;
//         }
//         x /= 2;
//     }
//     return true;
// }

// int main (){
//     int x;
//     cout << "Enter a number: ";
//     cin >> x;
//     if (Powerof2(x)) {
//         cout << x << " is Power of 2";
//     }
//     else {
//         cout << x << " is not power of 2";
//     }
// }


bool Powerof2(int N){
    if (N==0){
        return false;
    }
    while (N>1 && (N&1)==0){
        N >>=1;
    }
    if (N == 1) {
        return true;
    } else {
        return false;
    }
}

int main(){
    int N;
    cout << "Enter an integer: ";
    cin >> N;
    if (Powerof2(N)){
        cout << N << " is power of 2";
    } else {
        cout << "Invalid";
    }
}