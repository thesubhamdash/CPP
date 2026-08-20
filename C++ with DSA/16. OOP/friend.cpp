#include<iostream>
using namespace std;

class A{
    string secret = "secret data";
    friend class B;
    friend void revealSecret(A &obj);
};

class B{    // becomes a friend class for class A.
            // Only B can access A's private and protected data. Vice versa doesn't work here.
    public:
        void showSecret(A &obj){
            cout << obj.secret << endl;
        }
};

// Friend function
void revealSecret(A &obj){
    cout << obj.secret << endl;
}

int main(){
    A a1;
    B b1;

    b1.showSecret(a1);
    revealSecret(a1);
    return 0;
}