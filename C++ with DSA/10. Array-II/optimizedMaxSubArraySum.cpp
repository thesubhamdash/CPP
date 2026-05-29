#include <iostream>
using namespace std;

void maxsubarraySum(int *arr, int n){
    int  maxSum = INT32_MIN;
    for(int start=0; start<n; start++){
        int currSum = 0;
        for(int end=start; end<n; end++){
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "The maximum subArray sum is: " << maxSum << endl;
}

int main(){
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);

    maxsubarraySum(arr, n);
    return 0;
}