#include<iostream>
using namespace std;

class car{
    public:
        string name;
        string color;
        int* mileage;

    car(string name, string color){
        this->name = name;
        this->color = color;
        mileage = new int;  //Dynamic Allocation 
        *mileage = 12;
    }

    car(car &og){
        name = og.name;
        color = og.color;
            // Shallow Copy Constructor
        // mileage = og.mileage;   // Only copies the address, and points to the same location in heap of previous object.
       
            //Deep Copy Constructor
        mileage = new int;  //Dynamically allocated new memory for new object
        *mileage = *og.mileage;     // Copies the original value to the newly allocated memory 

    }

    ~car(){
        cout << "Freed up allocated memory\n";
        if(mileage != NULL){
            delete mileage;
            mileage = NULL;     // Doing null so removes the garbage value
        }
    }
};


int main(){
    car c1("BMW White Dragon", "RedBlack");

    car c2(c1);
    cout << c2.name << endl;
    cout << c2.color << endl;
    cout << *c2.mileage << endl;

    *c2.mileage = 10;

    cout << "C1 mileage: " << *c1.mileage << endl; 
    cout << "C2 mileage: " << *c2.mileage << endl;
    return 0;
}