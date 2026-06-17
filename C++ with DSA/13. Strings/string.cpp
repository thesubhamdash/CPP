#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str = "hello";
    cout << str << endl;
    str = "yellow";
    cout << str << endl;

    string str1;
    getline(cin, str1);

    cout << str1 << endl;
    cout << str1[0] << endl;
    cout << str1[1] << endl;
    cout << str1[2] << endl;
    cout << str1[3] << endl;

    return 0;
}