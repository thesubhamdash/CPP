#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int i,j;
    char count='A';

    for(i=1; i<=n; i++){
        for (j=1; j<=i; j++){
            cout << count++;    //Post Increment --> first using the old one and update to a new for next step
            // count++;
        }
        cout << endl;
    }
}