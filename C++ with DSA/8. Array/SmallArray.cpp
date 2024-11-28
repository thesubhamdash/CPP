#include<iostream>
using namespace std;

int main(){
    int nums[] = {5,10,15,-4,100,-10,1};
    int size = 7;
    int smallest = INT32_MAX;
    int largest = INT8_MIN;

    int i;
    for (i=0; i<size; i++){

        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);        // min or max are two explicit functions

        // if (nums[i] < smallest){
        //     smallest = nums[i];
        // }
    }
    
    cout << smallest << " is the smallest value in existing array" << endl;
    cout << largest << " is the largest value in existing array" << endl;

    for (i = 0; i < size; i++)
    {
        if (smallest == nums[i]){
            cout << i << " is index of smallest value" << endl;
        }

        if (largest == nums[i]){
            cout << i << " is index of largest value" << endl;
        }
    }
    
    return 0;
}