#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(j=1; j<=i+1; j++){
            cout << j;
        }
        if(i>0){
            for(j=i; j>0; j--){
                cout << j;
            }
        }
        cout << endl;
    }
    return 0;
}