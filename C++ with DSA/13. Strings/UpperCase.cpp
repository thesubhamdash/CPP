#include<iostream>
using namespace std;

void toUpper(char word[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] = word[i] - 'a' + 'A';
        }
    }
}

int main(){
    char word[] = "ApPle";
    toUpper(word);

    cout << word << endl;
    return 0;
}