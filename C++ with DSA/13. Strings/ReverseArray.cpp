#include <iostream>
#include <cstring>

using namespace std;

void reverseArray(char word[], int n) {
    int st = 0;
    int end = n - 1;

    while (st < end) {
        swap(word[st], word[end]);
        st++;
        end--;
    }
}

int main() {
    char word[] = "code";

    reverseArray(word, strlen(word));
    cout << word << endl;   // edoc

    return 0;
}