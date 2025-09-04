#include <iostream>
#include <cmath>
using namespace std;

int check(int C[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (C[i] == key){ 
            return 1;
        }
    }
    return 0;
}

void UnionSet(int A[], int B[], int m, int n){
    int R[100], size = 0;
    for (int i = 0; i < m; i++){ 
        R[size++] = A[i];
    }
    for (int j = 0; j < n; j++){
        if (!check(A, m, B[j])){
            R[size++] = B[j];
        }
    }
    cout << "Union set is: ";
    for (int i = 0; i < size; i++) cout << R[i] << " ";
    cout << endl;
}

void Intersection(int A[], int B[], int m, int n) {
    cout << "Intersection: ";
    for (int i = 0; i < n; i++) {
        if (check(A, m, B[i])){
            cout << B[i] << " ";
        }
    }
    cout << endl;
}

void Complement(int A[], int B[], int U[], int m, int n, int u) {
    cout << "Complement of A: ";
    for (int i = 0; i < u; i++) {
        if (!check(A, m, U[i])){
            cout << U[i] << " ";
        }
    }
    cout << endl;
    cout << "Complement of B: ";
    for (int i = 0; i < u; i++) {
        if (!check(B, n, U[i])){
            cout << U[i] << " ";
        }
    }
    cout << endl;
}

void Set_Difference(int A[], int B[], int m, int n) {
    cout << "Set Difference (A - B): ";
    for (int i = 0; i < m; i++){
        if (!check(B, n, A[i])){
            cout << A[i] << " ";
        }
    }
    cout << endl;
}

void Cartesian_Product(int A[], int B[], int m, int n) {
    cout << "Cartesian Product: ";
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << "(" << A[i] << "," << B[j] << ") ";
        }
    }
    cout << endl;
}

void Power_set(int A[], int m, char name) {
    int powerSize = pow(2, m);
    cout << "Power set of " << name << ": { ";
    for (int i = 0; i < powerSize; i++){
        cout << "{";
        for (int j = 0; j < m; j++){
            if (i & (1 << j)){
                cout << A[j] << " ";
            }
        }
        cout << "} ";
    }
    cout << "}" << endl;
}

int main() {
    int m, n, u, doit, c;

    cout << "How many integers in set A, set B and set U? ";
    cin >> m >> n >> u;

    int A[50], B[50], U[50];

    cout << "Enter elements of set A: ";
    for (int i = 0; i < m; i++) cin >> A[i];

    cout << "Enter elements of set B: ";
    for (int i = 0; i < n; i++) cin >> B[i];

    cout << "Enter elements of set U: ";
    for (int i = 0; i < u; i++) cin >> U[i];

    do {
        cout << "\nChoose operation:\n"
             << "1. Union\n2. Intersection\n3. Complement\n"
             << "4. Set Difference\n5. Cartesian Product\n6. Power set\n";
        cin >> doit;

        switch (doit) {
            case 1: UnionSet(A, B, m, n); 
                break;
            case 2: Intersection(A, B, m, n); 
                break;
            case 3: Complement(A, B, U, m, n, u); 
                break;
            case 4: Set_Difference(A, B, m, n); 
                break;
            case 5: Cartesian_Product(A, B, m, n); 
                break;
            case 6: Power_set(A, m, 'A'); Power_set(B, n, 'B'); 
                break;
            default: 
                cout << "Invalid choice\n";
        }

        cout << "\nDo you want to continue (1 = yes, 0 = no)? ";
        cin >> c;
    } while (c != 0);

    return 0;
}
