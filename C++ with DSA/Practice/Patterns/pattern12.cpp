#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout << "Enter the value of n: ";
    cin >> n;

    // TOP
    for(i=0; i<n; i++){
            
        // spaces
        for(j=0; j<n-i-1; j++){
            cout << " ";
        }

        cout << "*";

        // inner spaces
        if (i!=0){
            for(j=0; j<2*i-1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl; 
    }

    // BOTTOM
    
    for(i=0; i<n-1; i++){
        // spaces
        for(j=0; j<i+1; j++){
            cout << " ";
        }
        cout << "*";
        // inner spaces
        if(i!=n-1){
            // for(j=; j<; j++){
            //     cout << " ";
            // }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}