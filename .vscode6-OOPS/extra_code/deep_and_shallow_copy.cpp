#include <iostream>
using namespace std;

class Rectangle {
public:
    int *l, *b;
    bool owns_memory;

    Rectangle(int x, int y) {
        l = new int(x);
        b = new int(y);
        owns_memory = true;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Shallow copy constructor
    Rectangle(const Rectangle &r, bool shallow) {
        if (shallow) {
            l = r.l;
            b = r.b;
            owns_memory = false;
            cout << "Shallow Copy Constructor Called" << endl;
        }
    }

    // Deep copy constructor
    Rectangle(const Rectangle &r) {
        l = new int(*r.l);
        b = new int(*r.b);
        owns_memory = true;
        cout << "Deep Copy Constructor Called" << endl;
    }

    ~Rectangle() {
        if (owns_memory) {
            delete l;
            delete b;
        }
        cout << "Destructor Called" << endl;
    }

    void display() const {
        cout << "Rectangle Dimensions: l = " << *l << ", b = " << *b << endl;
    }
};

// Function to demonstrate shallow copy issue
void shallowCopyDemo() {
    Rectangle temp(10, 20);
    Rectangle obj(temp, true); // Shallow copy
    cout << "Inside shallowCopyDemo:" << endl;
    obj.display();
    // temp and obj share the same memory for l and b
    // When this function ends, temp is destroyed and deletes l and b
    // obj's l and b become dangling pointers!
    cout << "Leaving shallowCopyDemo (temp and obj will be destroyed)" << endl;
}

// Function to demonstrate deep copy safety
Rectangle returnDeep() {
    Rectangle temp(30, 40);
    Rectangle obj(temp); // Deep copy
    cout << "Returning Deep Copy Object" << endl;
    return obj; // Safe: obj has its own memory
}

int main() {
    cout << "=== Shallow Copy Demo (Dangling Pointer) ===" << endl;
    shallowCopyDemo();
    // Uncommenting the following lines will cause undefined behavior!
    // Rectangle temp(10, 20);
    // Rectangle obj(temp, true);
    // temp.~Rectangle();
    // obj.display(); // Dangling pointer access!

    cout << "\n=== Deep Copy Demo (Safe) ===" << endl;
    Rectangle obj2 = returnDeep();
    obj2.display();

    *obj2.l = 300;
    *obj2.b = 400;
    cout << "After modifying deep copy:" << endl;
    obj2.display();

    return 0;
}