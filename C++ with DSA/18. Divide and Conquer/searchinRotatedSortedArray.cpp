#include<iostream>
using namespace std;

int search(int arr[], int si, int ei, int target){
    int mid = si + (ei-si)/2;
    if(si > ei){
        return -1;
    }

    if(arr[mid] == target){
        return mid;
    } 
    else if (arr[si] <= arr[mid]){    //left array is sorted
        if(target >= arr[si] && target < arr[mid]){     //target is in left sorted part
            return search(arr, si, mid-1, target);
        } else {    //target is in right unsorted part
            return search(arr, mid+1, ei, target);
        }
    } 
    else {    //right array is sorted
        if(target > arr[mid] && target <= arr[ei]){     //target is in right sorted part
            return search(arr, mid+1, ei, target);
        } else {
            return search(arr, si, mid-1, target);     //target is in left unsorted part
        }
    }
    return -1;
}

int main(){
    int arr[7] = {4,5,6,7,0,1,2};
    int n=7;
    
    int idx = search(arr, 0, n-1, 2);
    cout << "The target is on index: " << idx << endl;
    return 0;
}