#include<iostream>
using namespace std;

char chReturn(char ch){
    if (ch =='z'){
        return 'a';
    } else {
        return ++ch; 
    }
}

int main(){
    char ch;
    cout << "Enter any letter from a to z: ";
    cin >> ch;
    char getch = chReturn (ch);
    cout << getch;
}