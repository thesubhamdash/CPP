#include<iostream>
using namespace std;

int main(){
    int arr[]={4,2,7,8,1,6,5};
    int n=7,i, start=0, end=n-1;
    
    for (i=0; i<n; i++){
        if(start<end){
            swap (arr[start], arr[end]);
            start++;
            end--;
        }
    }
    
    cout << "After swapping: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}