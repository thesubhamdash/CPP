#include<iostream>
using namespace std;

int main(){
    int n,i,sum=0;
    cout << "Enter the range of numbers: ";
    cin >> n;
    for (i=1; i<=n; i++){
        if( i % 3 == 0){
            sum += i;
        }
    }
    cout << "The required sum is: " << sum << endl;
    return 0; 
}