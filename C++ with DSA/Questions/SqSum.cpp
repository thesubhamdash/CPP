#include<iostream>
using namespace std;

int SquareSum(int a, int b){
    int sqsum = ((a*a) + (2*a*b) + (b*b));
    return sqsum; 
}

int main(){
    int s = SquareSum (5,2);  
    cout << s << endl;
    return 0;
}