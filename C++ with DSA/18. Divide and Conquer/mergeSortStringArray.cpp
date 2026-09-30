#include<iostream>
#include<string>
#include<vector>
using namespace std;

void merge(string arr[], int si, int ei, int mid){
    int i=si, j = mid+1;
    vector<string> temp;
    while(i<=mid && j<=ei){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;   
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid){
        temp.push_back(arr[i++]);
    }
    while(j <= ei){
        temp.push_back(arr[j++]);
    }
    for(int idx=si, x=0; idx<=ei; idx++){
        arr[idx] = temp[x++];
    }
}

void mergeSort(string arr[], int si, int ei){
    if(si >= ei){
        return;
    }
    int mid = si + (ei-si)/2;
    mergeSort(arr, si, mid);
    mergeSort(arr, mid+1, ei);
    merge(arr, si, ei, mid);
}

void printArr(string arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ", "; 
    }
}

int main(){
    string arr[4] = {"sun", "earth", "mars", "mercury"};
    int n=4;

    mergeSort(arr, 0, n-1);
    printArr(arr, n);
    return 0;
}