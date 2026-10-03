#include<iostream>
using namespace std;

int main(){
    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int rows = 3, cols=4;
    
    int res[cols][rows];
    
    cout << "Original Array: "<< endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Transpose:" << endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            res[j][i] = arr[i][j];
        }
    }

    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}