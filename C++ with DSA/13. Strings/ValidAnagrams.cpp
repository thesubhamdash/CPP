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
        count[ch - 'a']++;
    }

    for(char ch:str2){
        if(count[ch - 'a'] == 0){
            cout << "Not valid anagrams!" << endl;
            return false;
        }
        count[ch - 'a']--;
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