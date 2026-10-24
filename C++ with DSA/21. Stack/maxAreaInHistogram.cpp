#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void printArr(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int maxAreainHistogram(vector<int> height){
    int size = height.size();
    vector<int> nsl(size);
    vector<int> nsr(size);
    stack<int> s;

    //next smaller left
    nsl[0] = -1;
    s.push(0);
    for(int i=1; i<size; i++){
        while(!s.empty() && height[i] <= height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsl[i] = -1;
        } else{
            nsl[i] = s.top();
        }
        s.push(i);
    }
    printArr(nsl);

    //Empty the stack
    while(!s.empty()){
        s.pop();
    }

    //next smaller right
    nsr[size-1] = size;
    s.push(size-1);
    
    for(int i = size-2; i>=0; i--){
        while(!s.empty() && height[i] <= height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsr[i] = size;
        } else{
            nsr[i] = s.top(); 
        }
        s.push(i);
    }
    printArr(nsr);

    int maxArea = 0;
    for(int i=0; i<size; i++){
        int width = nsr[i] - nsl[i] - 1;
        int area = height[i] * width;
        maxArea = max(maxArea, area);
    } 

    return maxArea;
}

int main(){
    vector<int> height = {2, 1, 5, 6, 2, 3};

    cout << maxAreainHistogram(height) << endl;
    return 0;
}