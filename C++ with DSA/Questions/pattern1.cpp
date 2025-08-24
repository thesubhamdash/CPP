#include<iostream>
using namespace std;

int main(){
    int n=3,i,j;
    int num=1;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
    return 0;
}