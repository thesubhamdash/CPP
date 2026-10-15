#include<iostream>
#include<vector>
using namespace std;

int ratMoves(int maze[][4], int row, int col, int n, int m, string ans, vector<vector<bool>>& visited){
    
    // Base Case -> Reached destination
    if( row == n-1 && col == m-1){
        cout << ans << endl;
        return 1;
    }

    // Rat moved out of bounds in the maze.
    if (row < 0 || col < 0 || row >= n || col >= m) {
        return 0;
    }

    // Path blocked
    if(maze[row][col] == 0){
        return 0;
    }

    // Already visited
    if(visited[row][col] == true){
        return 0;
    }

    visited[row][col] = true;

    int right = 0;
    int down = 0;
    int left = 0;
    int up = 0;

    //Right
    right += ratMoves(maze, row, col+1, n, m, ans+'R', visited);

    //Down
    down += ratMoves(maze, row+1, col, n, m, ans+'D', visited);

    //Left
    left += ratMoves(maze, row, col-1, n, m, ans+'L', visited);

    //Up
    up += ratMoves(maze, row-1, col, n, m, ans+'U', visited);

    visited[row][col] = false;

    return right+down+left+up;
}


int main(){
    int n = 4, m = 4;
    int maze[4][4] = {{1,0,0,0},
                      {1,1,0,1},
                      {1,1,0,0},
                      {0,1,1,1}};

    vector<vector<bool>> visited;
    for(int i=0; i<n; i++){
        vector<bool> newRows;
        for(int j=0; j<m; j++){
            newRows.push_back(false);
        }
        visited.push_back(newRows);
    }
    string ans=""; 

    int count = ratMoves(maze, 0, 0, 4, 4, ans, visited);
    cout << "count: " << count << endl;
    return 0;
}