#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50}, smallest, largest,i;
    int size=5,indexS=0, indexL=0;
    smallest = INT16_MAX;
    largest = INT16_MIN;

    cout << "Before swapping:" << endl;
    for(i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for (i=0; i<size; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
            indexS = i;
        }
        if (arr[i] > largest){
            largest = arr[i];
            indexL = i;
        }
    }

    cout << "The smallest element is: " << smallest << endl;
    cout << "The largest element is: " << largest << endl;

    swap(arr[indexS],arr[indexL]);

    cout << "After swapping:" << endl;
    for(i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;    
}