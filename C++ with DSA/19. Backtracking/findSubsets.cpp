#include<iostream>
#include<string>
#include<vector>
using namespace std;

void findSubString(string str, string ans){
    if(!str.size()){
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    findSubString(str.substr(1, str.size()-1), ans+ch); //Yes Case
    findSubString(str.substr(1, str.size()-1), ans); //No Case
}

int main(){
    string str = "abc";
    string ans = "";
    findSubString(str, ans);
    return 0;
}