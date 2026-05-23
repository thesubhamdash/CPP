#include<iostream>
using namespace std;

// void bubbleSort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return; // No sorting done.
        }
    }
}

int main(){
    int arr[] = {5,1,10,4,8};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}