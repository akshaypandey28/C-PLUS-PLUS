#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display() method called" << endl;
    }
    void display(int x) {
        cout << "Base class display(int x) method called with x = " << x << endl;
    }
};

class Derived : public Base {
public:
    void display() { //method overriding
        cout << "Derived class display() method called" << endl;
    }

    void display(string message) { //method hiding
        cout << "Derived class display(string) method called with message: " << message << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Base class methods
    baseObj.display();              // Calls Base::display()
    baseObj.display(10);            // Calls Base::display(int x)
    cout<<endl;

    // Derived class methods
    derivedObj.display();           // Calls Derived::display()
    derivedObj.display("Hello");    // Calls Derived::display(string)
    cout<<endl;
    
    // Access Base class method from Derived object
    derivedObj.Base::display();     // Calls Base::display()
    derivedObj.Base::display(20);   // Calls Base::display(int x)

    return 0;
}
