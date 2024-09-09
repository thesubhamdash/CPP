#include<iostream>
using namespace std;

int main(){
    int n;
    do
    {
        cout << "Enter a number: ";
        cin >> n;

        if (n == 0)
        {
            break;
        }

        if (n % 10 == 0)
        {
            continue;
        }
        
        cout << "You entered " << n << endl;        

    } while (true);
    cout << "Program Terminated" << endl;
    return 0;   
}