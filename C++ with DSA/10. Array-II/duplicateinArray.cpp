#include<iostream>
using namespace std;

void Duplicate(int *arr, int n){
    bool result = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if ((i!=j) && (arr[i] == arr[j])){
                result = true;
                cout << result;
                return;
            } 
        }
    }
    cout << result;
}

int main(){
    int arr[6] = {7, 1, 1, 3, 6, 4};
    int n = sizeof(arr) / sizeof(int);

    Duplicate(arr, n);
    return 0;
}