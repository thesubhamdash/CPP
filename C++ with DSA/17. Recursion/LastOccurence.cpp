#include<iostream>
#include<vector>
using namespace std;

int LO(vector<int> arr, int i, int target){
    if(i==arr.size()){
        return -1;
    }
    int idx = LO(arr, i+1, target);
    if(idx == -1 && arr[i] == target){
        return i;
    }
    return idx;
}

int main(){
    vector<int> arr={1,2,3,3,3,4};
    cout << LO(arr, 0, 3);
    return 0;
}