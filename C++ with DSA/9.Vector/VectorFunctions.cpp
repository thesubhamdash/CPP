#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;
    cout << "size = " << vec.size() << endl;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    cout << "After push back, size = " << vec.size() << endl;
    for(int val: vec){
        cout << val << " ";
    }
    cout << endl;

    vec.pop_back();     // Automatically deletes the last element
    cout << "After pop back:" << endl;
    for(int val: vec){
        cout << val << " ";
    }
    cout << endl;

    // Prints the selected value at front, back and at some index
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(1) << endl;

    return 0;
}