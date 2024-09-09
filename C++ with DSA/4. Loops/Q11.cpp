#include<iostream>
using namespace std;

int main(){
    int n,i=1;

    // while(n % 10 != 0){
    //     cout << "Enter a number: ";
    //     cin>>n;
    //     i++;
    // }

    do{
        cout << "Enter a number: ";
        cin>>n;
        i++;
    }   while (n % 10 != 0);

    cout << "Program Terminated";
    return 0;
}