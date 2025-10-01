#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={1,2,3};

    for(int val: vec){
        cout << val << " ";
        //Here, i[value instead] refers to the value of that index, not the index itself
        // iterator's data type must be of vector's data type
    }
    cout << endl;

    vector<char>vecc={'a','b','c','d'};

    for (char val: vecc){
        cout << val << " ";
    }
    return 0;
}