#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "Enter the value of n: ";
    cin >> n;

    for(i=0; i<n; i++){
        int num = 1;
        for(j=0; j<i+1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}