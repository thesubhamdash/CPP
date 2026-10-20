#include<iostream>
#include<string>
#include<stack>
using namespace std;

string reverseString(string str){
    string ans;
    stack<char> s;

    for(char ch: str){
        s.push(ch);
    }

    while(!s.empty()){
        char top = s.top();
        ans += top;
        s.pop();
    }
    return ans;
}

int main(){
    string str = "khushisubham";
    cout << str << endl;
    cout << reverseString(str) << endl;
    return 0;
}