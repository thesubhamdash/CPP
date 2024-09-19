#include<iostream>
using namespace std;

// Function to reverse a number
int Reverse (int n){
    int a, rev=0;

    while (n>0){
        a = n % 10; // Takes the last digit
        rev = rev * 10 + a;
        n = n / 10;     // Removes the last digit 
    }

    return rev;
}


// Function to check if the entered number and reversed number are same
bool isPalindrome(int n){
    int num = Reverse(n);
    return n == num;
}


// Function to check if any number is Palindrome or not
int main(){
    int n;
    cout << "Enter any 3-digit number or more: ";
    cin >> n;
    
    if (isPalindrome(n)){
        cout << n << " is Palindrome";
    } else {
        cout << n << " is not Palindrome";
    }
    return 0;
}