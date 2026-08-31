#include<iostream>
using namespace std;

int search(int *arr, int target, int size){
    int low = 0;
    int high = size - 1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            return mid;
        }

                //Check if left or right array is sorted
        //left array is sorted
        else if(arr[low] <= arr[mid]){
            // Target lies in left sorted part
            if(target >= arr[low] && target < arr[mid]){
                high = mid - 1;
            } else {    // target lies in right unsorted part
                low = mid + 1;
            }
        } 

        //right array is sorted
        else{
            // Target lies in right sorted part
            if(target >= arr[mid] && target < arr[high]){
                low = mid + 1;
            } else {    // target lies in left unsorted part
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[7] = {4,5,6,7,0,1,2};
    cout << search(arr, 4, 7) << endl;
    return 0;
}