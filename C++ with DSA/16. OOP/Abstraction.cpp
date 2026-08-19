#include <iostream>
using namespace std;

// Abstract class
class Shape {
    public:
            // Pure virtual function
        virtual void area() = 0;
        
        void display() {
            cout << "This is a shape.\n";
        }
        
            // Virtual destructor
        virtual ~Shape() {
            cout << "Shape destroyed\n";
        }
};

// Derived class 1
class Circle : public Shape {
    public:
        void area() override {
            cout << "Area of Circle: π * r * r\n";
        }
};

// Derived class 2
class Rectangle : public Shape {
    public:
        void area() override {
            cout << "Area of Rectangle: length * breadth\n";
        }
};

int main() {
    // Shape s; => Not allowed: cannot instantiate abstract class
    
    Shape* s1 = new Circle();
    s1->area(); // Output: Area of Circle
    s1->display(); // Output: This is a shape.
    
    Shape* s2 = new Rectangle();
    s2->area(); // Output: Area of Rectangle
    s2->display(); // Output: This is a shape.
    
    delete s1;
    delete s2;
}