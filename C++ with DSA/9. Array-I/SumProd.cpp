#include<iostream>
using namespace std;

int main(){
    int arr[10], sum=0, prod=1, i;

    cout << "Enter the elements of array: ";
    for (i=0; i<10; i++){
        cin >> arr[i]; 
    }

    for(i=0; i<10; i++){
        sum += arr[i];
        prod *= arr[i];
    }
    cout << "The sum is: " << sum << endl;
    cout << "The product is: " << prod << endl;
    return 0;
}