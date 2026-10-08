#include<iostream>
#include<string>
using namespace std;

void permCount(string str, string ans){
    int n = str.size();
    if(!n){
        cout << ans << endl;
        return;
    }
    for(int i=0; i<n; i++){
        char ch = str[i];
        string newStr = str.substr(0, i) + str.substr(i+1, n-i-1);
        permCount(newStr, ans+ch);
    }
}

int main(){
    string str = "abc";
    string ans = "";
    permCount(str, ans);
    return 0;
}