#include<iostream>
using namespace std;

int binSearch(int arr[], int key, int low, int high){
    while(low<=high){
        int mid = (low+high)/2;
        if(key == arr[mid]){
            return mid;
        } else if(key < arr[mid]){
            return binSearch(arr, key, low, (mid-1));
        } else {
            return binSearch(arr, key, (mid+1), high);
        }
    }
    return -1;
}

int main(){
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    cout << binSearch(arr,1,0,8) << endl;
    return 0;
}