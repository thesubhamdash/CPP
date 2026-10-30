#include<iostream>
#include<string>
#include<queue>
using namespace std;

void FirstNonRepeat(string str){
    queue<char> q;
    int freq[26] = {0};

    for(char ch:str){
        q.push(ch);
        freq[ch-'a']++;

        while(!q.empty() && freq[q.front()-'a'] > 1){
            q.pop();
        }

        if(q.empty()){
            cout << -1 << " ";
        } else{
            cout << q.front() << " ";
        }
    }
}

int main(){
    string str = "aabccxb";

    FirstNonRepeat(str);
    return 0;
}