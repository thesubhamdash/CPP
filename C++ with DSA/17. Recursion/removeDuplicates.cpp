#include<iostream>
#include<string>
using namespace std;

void removeDuplicates(string str, string ans, int i, int map[26]){
    
    //Base Case
    if(i == str.size()){
        cout << "ans: " << ans << endl;
        return;
    }

    int mapIdx = (int)(str[i] - 'a');

    if(map[mapIdx]){ //duplicate
        removeDuplicates(str, ans, i+1, map);
    } else{ //not duplicate
        map[mapIdx] = true;
        removeDuplicates(str, ans+str[i], i+1, map);
    }
}

int main(){
    int map[26] = {false};
    removeDuplicates("appnnacollege", "", 0, map);
    return 0;
}