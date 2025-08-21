#include <iostream>
using namespace std;

void printMat(int m, int n, int A[100][100], int i, int j) {
    if (i >= m) 
        return;

    if (j >= n) {
        cout << endl;
        printMat(m, n, A, i + 1, 0);
    } 
    else {
        cout << A[i][j] << " ";
        printMat(m, n, A, i, j + 1); 
    }
}

int main() {
    int m, n;
    cout << "Enter rows (m) and columns (n): ";
    cin >> m >> n;

    int A[100][100]; 

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "\nMatrix:\n";
    printMat(m, n, A, 0, 0);

    return 0;
}
