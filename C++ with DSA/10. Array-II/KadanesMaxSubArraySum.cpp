#include<iostream>
using namespace std;

void KadanesAlgorithm(int *arr, int n){
    int currSum = 0;
    int maxSum = INT32_MIN;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "The maximum subarray Sum is: " << maxSum << endl;
}

int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    KadanesAlgorithm(arr, n);
    return 0;
}