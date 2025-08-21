#include<iostream>
using namespace std;

int main(){
    int m,n,p,q,i,j,k;

    cout << "Enter the rows and columns of matrix A: ";
    cin >> m >> n;
    cout << "Enter the rows and columns of matrix B: ";
    cin >> p >> q;

    if (n!=p){
        cout << "Matrix Multiplication not possible";
        return 0;
    }  

    int **A = new int*[m];
    int **B = new int*[p];
    int **C = new int*[m];

    for (i=0; i<m; i++){
        A[i] = new int[n];
        C[i] = new int[q];   
    } 
    for(i=0; i<p; i++){
        B[i] = new int[q];
    }

    cout << "Enter the elements of A: \n";
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cin >> A[i][j];
        }
    }

    cout << "Enter the elements of B: \n";
    for(i=0; i<p; i++){
        for(j=0; j<q; j++){
            cin >> B[i][j];
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<q; j++){
            C[i][j]=0;
        }
    }

    for (int i = 0; i < m; i++) {       
        for (int j = 0; j < q; j++) {   
            for (int k = 0; k < n; k++) {  //for sum
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Elements of C: \n";
    for(i=0; i<m; i++){
        for(j=0; j<q; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        delete[] A[i];
        delete[] C[i];
    }
    for (int i = 0; i < p; i++) {
        delete[] B[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}