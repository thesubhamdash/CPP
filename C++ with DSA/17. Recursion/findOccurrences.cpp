#include<iostream>
#include<vector>
using namespace std;

void findOccurrences(vector<int> arr, int i, int key, vector<int> ans){
    if(i == arr.size()){
        for(int i=0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }

    if(arr[i] == key){
        ans.push_back(i);
        return findOccurrences(arr, i+1, key, ans);
    } else {
        return findOccurrences(arr, i+1, key, ans);
    }
}

int main(){
    vector<int> arr = {3,2,4,5,6,2,7,2,2};
    vector<int> ans;
    findOccurrences(arr, 0, 2, ans);
    return 0;
}