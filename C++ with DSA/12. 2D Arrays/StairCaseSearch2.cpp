#include<iostream>
using namespace std;

bool sortedmatrix(int mat[][4], int n, int m, int key){
    int i=n-1, j=0, steps=0;

    while(j<m && i>=0){
        if(mat[i][j] == key){
            cout << "Key found at (" << i << "," << j << ")" << endl;
            cout << "steps= " << steps;
            return true;
        } else if(mat[i][j] < key){
            j++;
            steps++;
        } else {
            i--;
            steps++;
        }
    }

    cout << "Key not found!";
    return false;
}

int main(){
    int matrix[4][4] = {{10, 20, 30, 40}, 
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};

    sortedmatrix(matrix, 4, 4, 35);
    return 0;
}