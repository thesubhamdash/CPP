#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    sort(arr+2, arr+5);
    for(int i=0; i<8; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr+8);
    for(int i=0; i<8; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // For descending order
    sort(arr, arr+8, greater<int>());
    for(int i=0; i<8; i++){
        cout << arr[i] << " ";
    }

    return 0;
}