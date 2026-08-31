#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int start=0, end = nums.size() - 1;
    int currSum = 0;
    vector<int> ans;

    vector<pair<int, int>> arr;

    for(int i=0; i<nums.size(); i++){
        arr.push_back({nums[i], i});    
    }
    
    sort(arr.begin(), arr.end());

    while(start < end){
        currSum = arr[start].first + arr[end].first;
        if(currSum == target){
            ans.push_back(arr[start].second);
            ans.push_back(arr[end].second);
            return ans;
        }
        else if(currSum < target){
            start++;
        }
        else {
            end--;
        }     
    }
    return ans;
}

int main() {
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(vec, target);

    for (int x : result)
        cout << x << " ";

    return 0;
}