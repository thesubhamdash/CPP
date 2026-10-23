#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool duplicateParanthesis(string str){
    stack<char> s;
    int count = 0;
    
    for(char ch:str){
        if(ch != ')'){  //Opening
            s.push(ch);
        } else {        //Closing
            if(s.top() == '('){
                return true;
            }
            while(s.top() != '('){
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}

int main(){
    string str1 = "((a+b) + (c+d))";  //Valid -> false
    string str2 = "((a+b))";     //Invalid -> true

    cout << duplicateParanthesis(str1) << endl;
    cout << duplicateParanthesis(str2) << endl;
    return 0;
}