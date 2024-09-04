#include<iostream>
using namespace std;

int main(){
    int phy, chem, maths;

    cout << "Enter obtained marks for physics, chemistry and maths: \n";
    cin >> phy >> chem >> maths;

    int avg = (phy+chem+maths)/ 3;

    cout << "The average marks of 3 subjects is: \n" << avg << endl;
    return 0;
}