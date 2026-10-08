#include<iostream>
#include<vector>
#include<string>
using namespace std;

void printBoard(vector<vector<char>> board){
    int n = board.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------------------\n";
}

bool isSafe(vector<vector<char>> board, int row, int col){       //Decides where the actual queen must be placed.
    int n = board.size();

    //Horizontal
    for(int j=0; j<n; j++){
        if(board[row][j] == 'Q'){
            return false;
        }
    }

    //Vertical
    for(int i=0; i<row; i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }

            //Diagonal

    //Diagonal Left
    for(int i=row, j=col; i>=0 && j>=0 ; i--,j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    //Diagonal Right
    for(int i=row, j=col; i>=0 && j<n ; i--,j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    //Safe place
    return true;
}

void nQueens(vector<vector<char>> board, int row){

    int n = board.size();
    if(row == n){           // Base Case
            printBoard(board);
            return;
        }
    for(int j=0; j<n; j++){     // Loop for columns.
        if(isSafe(board, row, j)){
            board[row][j] = 'Q';    // One Queen placed.
            nQueens(board, row+1);  // Next Row
            board[row][j] = '.';
        }
    }
}

int main(){
    vector<vector<char>> board;
    int n = 4;

    for(int i=0; i<n; i++){
        vector<char> newRow;
        for(int j=0; j<n; j++){
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
    nQueens(board, 0);
    
    return 0;
}