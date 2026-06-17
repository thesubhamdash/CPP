#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec1;
    // segmentation fault
    // cout << vec1[0];  

    vector <int> vec2 = {1,2,3};
    cout << vec2[1] << endl;

    vector <int> vec(3,0);  //3 is size and 0 is elements in all spaces
    cout << vec[0]<< endl;
    cout << vec[1]<< endl;
    cout << vec[2]<< endl;
    return 0;
}