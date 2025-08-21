#include<iostream>
using namespace std;

int Traverse(int A[100], int n);
int Insert(int A[100], int n, int pos, int k);
int Delete(int A[100], int n, int pos);
int Search(int A[100], int n, int k);
int BubbleSort(int A[100], int n);

int main(){
    int n=10,pos,k;
    int A[100]={5,8,3,9,2,7,1,6,4,10};         
    Traverse(A,n);
    Insert(A,n,pos,k);
    //Delete(A,n,pos);
    Search(A,n,k);
    BubbleSort(A,n);
    return 0;
}

int Traverse (int A[100], int n){
    cout << "Traversing an array\n";
    for (int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

int Insert(int A[100], int n, int pos, int k){
    cout << "Inserting element in an array\n";
    
    cout << "Enter the position where anything is to be entered";
    cin >> pos;

    cout << "Enter the element to be entered";
    cin >> k;
    
    for (int i=n-1; i>=pos; i--){
        A[i+1] = A[i];
    }
    A[pos] = k;
    n += 1;
    for (int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    cout << endl; 
}

int Delete(int A[100], int n, int pos){
        cout << "Deleting element in an array\n";

        cout << "Enter the position whose element needs to be deleted";
        cin >> pos;

        for(int i=pos; i<=n-1; i--){
            A[i] = A[i+1];
        }
        n = n-1;
        for (int i=0; i<n; i++){
            cout << A[i] << " ";
        }
        cout << endl;
    }

int Search(int A[100], int n, int k){
    cout << "Searching an element with index\n";

    cout << "Enter the element to be searched: ";
    cin >> k;
    for (int i=0; i<n; i++){
        if(A[i] == k){
            cout << "Index of element " << k << " is:" << i << endl;
        }
    }
}

int BubbleSort(int A[100], int n){
    cout << "Performing Bubble Sort in the given array\n";

    for(int a=n; a>=1; a--){
        for(int b=0; b<a-1; b++){
            if (A[b] > A[b+1]){
                int temp = A[b];
                A[b] = A[b+1];
                A[b+1] = temp; 
            }
        }
    }
    cout << "Sorted Array\n";
    for (int i=0; i<n; i++){
        cout << A[i] << " ";
    } 
}
