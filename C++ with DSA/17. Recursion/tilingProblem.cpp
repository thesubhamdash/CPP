#include<iostream>
using namespace std;

int tilingProblem(int n){   //2Xn

    //Base case
    if(n == 0 || n == 1){
        return 1;
    }
    return tilingProblem(n-1) + tilingProblem(n-2);
    
    // vertical
    // int ansV = tilingProblem(n-1);  //2X(n-1)

    // horizontal
    // int ansH = tilingProblem(n-2);  //2X(n-2)

    // return ansV + ansH;
}

int main(){
    cout << tilingProblem(3) << endl;
    return 0;
}