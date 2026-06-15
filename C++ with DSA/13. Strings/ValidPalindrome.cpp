#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char str[], int n){
    int st=0, end=n-1;
    while(st < end){
        if(str[st++] != str[end--]){
            cout << "Not a valid Palindrome!\n";
            return false;
        }
    }
    cout << "Valid Palindrome\n";
    return true;
}

int main(){
    char str[] = {"racecar"};
    isPalindrome(str, strlen(str));

    return 0;
}