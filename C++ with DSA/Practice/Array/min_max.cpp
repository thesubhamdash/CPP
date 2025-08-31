#include<iostream>
using namespace std;

int main(){
    int num[5]={100,80,30,40,50};
    int n = 5,i,index=0;

    int smallest = INT16_MAX;
    int largest = INT16_MIN;

    for(i=0; i<n; i++){
        if (num[i] < smallest){
            smallest = num[i];
            index = i;
        }
    }
    cout << "Index of smallest number: " << index;
    return 0;
}