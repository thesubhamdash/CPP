#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6,i, start=0, end=n-1;
    
    for (i=0; i<n; i++){
        if(start<end){
            swap (arr[start], arr[end]);
            start++;
            end--;
        }
    }
    
    cout << "After swapping: " << endl;
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}