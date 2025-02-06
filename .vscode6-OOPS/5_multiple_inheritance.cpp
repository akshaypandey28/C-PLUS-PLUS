#include <iostream>
using namespace std;

// Base Class 1
class Base1 {
public:
    void displayBase1() {
        cout << "This is Base1 class" << endl;
    }
};

// Base Class 2
class Base2 {
public:
    void displayBase2() {
        cout << "This is Base2 class" << endl;
    }
};

// Derived Class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void displayDerived() {
        cout << "This is Derived class" << endl;
    }
};

int main() {
    Derived obj;

    // Access functions from both Base1 and Base2
    obj.displayBase1(); // Inherited from Base1
    obj.displayBase2(); // Inherited from Base2

    // Access function from Derived
    obj.displayDerived();

    return 0;
}
