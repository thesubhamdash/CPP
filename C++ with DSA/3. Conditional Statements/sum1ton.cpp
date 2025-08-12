#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout << "Enter the range of numbers for total sum: \n";
    cin >> n;
    for (int i=1; i<=n; i++){
        sum += i;
    }
    cout << "The total sum of numbers upto range n is: " << sum << endl;
    return 0;
}