#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,-2,3,4,15,-8,-2,11};
    int n=8;

    // BRUTEFORCE METHOD

    int maxSum = INT32_MIN;

    for(int st=0; st<n; st++){
        int currSum=0;
        for(int end=st; end<n; end++){
            currSum +=arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << "The maximum Subarray sum is: " << maxSum;
    return 0;
}