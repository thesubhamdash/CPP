#include<iostream>
using namespace std;

void countingSort(int *arr, int n){
    int freq[10000];
    int minVal = INT32_MAX, maxVal = INT32_MIN;

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    for(int i=minVal, j=0; i<=maxVal; i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }
}

int main(){
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    countingSort(arr, 8);
    for(int i=0; i<8; i++){
        cout << arr[i] << " ";
    }

    return 0;
}