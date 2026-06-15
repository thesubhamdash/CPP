#include<iostream>
using namespace std;

void toUpper(char word[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] = word[i] - 'a' + 'A';
        }
    }
}

void toLower(char word[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = word[i] - 'A' + 'a';
        }
    }
}

int main(){
    char word[] = "ApPle";
    cout << word << endl;

    toUpper(word);
    cout << word << endl;

    toLower(word);
    cout << word << endl;
    return 0;
}