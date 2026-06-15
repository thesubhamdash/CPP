#include<iostream>
using namespace std;

void arraytoMatrix(int mat[][4], int arr[], int size, int n, int m){
    for(int j=0; j<n; j++){
        for(int k=0; k<m; k++){
            mat[j][k] = *arr++;
        }
    }
    

    for(int j=0; j<n; j++){
        for(int k=0; k<m; k++){
            cout << mat[j][k] << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[16] = {10, 20, 30, 40, 15, 25, 35, 45, 27, 29, 37, 48, 32, 33, 39, 50};
    int size = 16;
    int mat[4][4];
    arraytoMatrix(mat, arr, size, 4, 4);
    return 0;
}