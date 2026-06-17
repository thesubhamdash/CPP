#include<iostream>
#include<cstring>
using namespace std;

bool isValidAnagram(string str1, string str2){
    int count[26] = {0};

    if(str1.length() != str2.length()){
        cout << "Not valid anagrams!" << endl;
        return false;
    }

    for(char ch: str1){
        int idx = ch - 'a';
        count[idx]++;
    }

    for(char ch:str2){
        int idx = ch - 'a';
        if(count[idx] == 0){
            cout << "Not valid anagrams!" << endl;
            return false;
        }
        count[idx]--;
    }

    cout << "Valid Anagrams!" << endl;
    return true;
}

int main(){
    string str1 = "anagram";
    string str2 = "nagaram";
    isValidAnagram(str1, str2);

    return 0;
}