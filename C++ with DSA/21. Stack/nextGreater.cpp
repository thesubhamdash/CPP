#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void nextGreater(vector<int> nums, vector<int> &ans){
    stack<int> s;
    int idx = nums.size()-1;
    ans[idx] = -1;
    s.push(nums[idx]);

    for(idx = idx-1; idx >= 0; idx--){
        while(!s.empty() && nums[idx] >= s.top()){
            s.pop();
        }
        if(s.empty()){
            ans[idx] = -1;
        } else {
            ans[idx] = s.top();
        }
        s.push(nums[idx]);
    }
}

void printVec(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> nums = {6, 8, 0, 1, 3};
    vector<int> ans = {0, 0, 0, 0, 0};

    nextGreater(nums, ans);
    printVec(nums);
    printVec(ans);
    return 0;
}