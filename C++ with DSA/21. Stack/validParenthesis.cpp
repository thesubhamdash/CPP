#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool validParenthesis(string str){
    stack<char> s;

    for(char ch : str){
        if(ch == '(' || ch ==  '[' || ch == '{'){
            s.push(ch);
        } else {         //Closing
            if(s.empty()){
                return false;
            } 

            //match
            char top = s.top();
            if( (ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[') ){
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

int main(){
    string str1 = "([}])";  //Invalid
    string str2 = "([{}])";     //Valid

    cout << validParenthesis(str1) << endl;
    cout << validParenthesis(str2) << endl;
    return 0;
}