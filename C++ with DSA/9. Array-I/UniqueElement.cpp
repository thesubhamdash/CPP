#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 5, 9, 4, 9, 7, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique elements: ";
    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j] && i != j) {
                count++;
                break;  
            }
        }

        if (count == 0) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
