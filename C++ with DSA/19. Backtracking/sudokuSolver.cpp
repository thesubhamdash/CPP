#include<iostream>
using namespace std;

void printSudoku(int sudoku[][9]){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafe(int sudoku[9][9], int row, int col, int digit){
    //Vertical
    for(int i=0; i<9; i++){
        if(sudoku[i][col] == digit){
            return false;
        }
    }

    //Horizontal
    for(int j=0; j<9; j++){
        if(sudoku[row][j] == digit){
            return false;
        }
    }

    //Grid
    int sRow = (row/3) * 3;
    int sCol = (col/3) * 3;
    for(int i=sRow; i<sRow+3; i++){
        for(int j=sCol; j<=sCol+2; j++){
            if(sudoku[i][j] == digit){
                return false;
            }
        }
    }

    return true;
}

bool sudokuSolver(int sudoku[9][9], int row, int col){
    
    //Base Case
    if(row == 9){
        printSudoku(sudoku);
        return true;
    }

    int newRow = row;
    int newCol = col+1;

    if(col+1 == 9){
        newRow = row+1;
        newCol = 0;
    }

    if(sudoku[row][col] != 0){
        return sudokuSolver(sudoku, newRow, newCol);
    }

    for(int digit=1; digit<=9; digit++){
        if(isSafe(sudoku, row, col, digit)){
            sudoku[row][col] = digit;
            if(sudokuSolver(sudoku, newRow, newCol)){
                return true;
            }
            sudoku[row][col] = 0;
        }
    }

    return false;
}

int main(){
    int sudoku[9][9] = {{0, 0, 8, 0, 0, 0, 0, 0, 0},
                        {4, 9, 0, 1, 5, 7, 0, 0, 2},
                        {0, 0, 3, 0, 0, 4, 1, 9, 0},
                        {1, 8, 5, 0, 6, 0, 0, 2, 0},
                        {0, 0, 0, 0, 2, 0, 0, 6, 0},
                        {9, 6, 0, 4, 0, 5, 3, 0, 0},
                        {0, 3, 0, 0, 7, 2, 0, 0, 4},
                        {0, 4, 9, 0, 3, 0, 0, 5, 7},
                        {8, 2, 7, 0, 0, 9, 0, 1, 3}};
    
    sudokuSolver(sudoku, 0, 0);
    return 0;
}