#include<iostream>
using namespace std;

void sortedmatrix(int mat[][4], int n, int m, int key){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (key == mat[i][j]){
                cout << "row = " << i << " & col = " << j << endl;
                return;
            }
        }
    }
}

int main(){
    int matrix[4][4] = {{10, 20, 30, 40}, 
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};

    sortedmatrix(matrix, 4, 4, 33);
    return 0;
}