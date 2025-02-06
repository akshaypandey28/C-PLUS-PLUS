#include <iostream>
using namespace std;
// Base class
class Base {
public:
    virtual void show() { // Virtual function for polymorphism
        cout << "Base class function called" << endl;
    }
};

// Derived class 1
class Derived1 : public Base {
public:

    void show() override { // Overriding base class function
        cout << "Derived1 class function called" << endl;
        Base::show();
    }
};
int main() {
    Base *basePtr; // Base class reference pointer
    Derived1 d1;

    // Referring Derived1 object using Base pointer
    basePtr = &d1;
    basePtr->show(); // Calls Derived1's show()

    return 0;
}
