#include<iostream>
using namespace std;

int LinearSearch(int arr[], int sz, int tg){
    for (int i=0; i<sz; i++){
        if (arr[i] == tg){ // FOUND
            return i;
        }
    }
    return -1;  // NOT FOUND
}

int main(){
    int arr[] = {1,3,10,80,8,5};
    int tg = 8, sz = 6;

    cout << LinearSearch(arr, sz, tg) << endl;
    return 0;
}