#include<iostream>
using namespace std;

int main(){
    // int *x = new int;
    // int *array = new int[5];
    int rows, cols;

    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter columns: ";
    cin >> cols;

    // Array of pointers pointing to individual rows of a 2D matrix.
    int* *matrix = new int*[rows];

    // Each array element is assigned a new row of specific column size
    for(int i=0; i<rows; i++){
        matrix[i] = new int[cols];
    }

    // Store Data in individual rows.
    int x=1;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            matrix[i][j] = x++;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    

    // delete x;
    // delete [] array;
    delete [] matrix; 
    return 0;
}