#include<iostream>
using namespace std;

int sum(int n){
    int sum=0;

    while (n>0){
        int a = n % 10;    // Takes the last digit
        sum = sum + a;
        n /= 10;    // Removes the last digit
    }

    return sum;
}

int main(){
    int n;
    cout << "Enter any digit number: ";
    cin >> n;

    int s = sum(n);
    cout << "The sum of digits of entered number is " << s << endl;
    return 0;
}