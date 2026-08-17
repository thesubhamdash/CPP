#include<iostream>
using namespace std;

class Animal{
    public:
        string color;
        void eat(){
            cout << "Eats\n";
        }
        void breathe(){
            cout << "Breathes\n";
        }
};

class Fish : public Animal{
    public:
        int fins;
        void swim(){
            cout << "Swims\n";
        }
};

int main(){
    Fish f1;
    f1.fins = 4;
    cout << f1.fins << endl;
    f1.breathe();
    f1.eat();
    f1.swim();
    return 0;
}