#include<iostream>
using namespace std;

int main(){
    int i,j,n,num;
    cout << "Enter the value of n: ";
    cin >> n;

    for(i=0; i<n; i++){
        num = 1;
        for(j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(j=0; j<=i; j++){
            cout << num;
            num += 1;
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