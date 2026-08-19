#include<iostream>
using namespace std;

class Calculator{
    public:
            // Function Overloading
        int add(int a, int b){
            return a+b;
        }
        double add(double a, double b){
            return a+b;
        }
        int add(int a, int b, int c){
            return a+b+c;
        }
};

class complex {
    int real;
    int imag;
    
    public:
        complex(int r, int i){
            real = r;
            imag = i; 
        }

        void showNum(){
            cout << real << " + " << imag << "i" << endl;
        }

            // Operator Overloading
        void operator +(complex &obj){
            int resReal = this->real + obj.real;
            int resImag = this->imag + obj.imag;
            complex c3(resReal, resImag);
            cout << "res = ";
            c3.showNum();
        }
};

int main(){
    // Calculator c1;
    // cout << c1.add(6,3) << endl; 
    // cout << c1.add(3.0,6.0) << endl;
    // cout << c1.add(3,6,9) << endl;

    complex c1(1,2);
    complex c2(3,4);
    c1.showNum();
    c2.showNum();

    c1 + c2;
    // or
    c1.operator+(c2);
    return 0;
}