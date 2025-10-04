#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={1,2,3,2,4,5,3,1,5};
    int ans = 0;
    for(int val:nums){
        ans ^= val;
    } 
    cout << "The single number is: " << ans;
    return 0;
}