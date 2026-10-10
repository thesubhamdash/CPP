#include<iostream>
using namespace std;

int ways(int r, int c, int n, int m, string ans){

    if(r==n-1 && c==m-1){
        cout << ans << endl;
        return 1;
    }

    if(r >= n || c >= m){
        return 0;
    }
    //Down
    int way1 = ways(r+1, c, n, m, ans+"D");

    //Right
    int way2 = ways(r, c+1, n, m, ans+"R");

    return way1 + way2;
}

int main(){
    int n = 2, m = 3;
    string ans="";
    int count = ways(0, 0, n, m, ans);
    cout << "No. of ways for " << n << "x" << m << " is: " << count << endl;
}