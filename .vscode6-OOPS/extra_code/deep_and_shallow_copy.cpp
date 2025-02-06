#include <iostream>
using namespace std;
//chat gpt code
class Rectangle {
public:
    int l, b;
    // Parameterized constructor
    Rectangle(int x, int y) {
        l = x;
        b = y;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Shallow Copy Constructor
    Rectangle(const Rectangle& r, bool shallow) {
        if (shallow) {
            l = r.l; // Copy the value directly
            b = r.b;
            cout << "Shallow Copy Constructor Called" << endl;
        }
    }

    // Deep Copy Constructor
    Rectangle(const Rectangle& r) {
        l = r.l; // Copy the value explicitly
        b = r.b;
        cout << "Deep Copy Constructor Called" << endl;
    }

    // Destructor
    ~Rectangle() {
        cout << "Destructor Called for Rectangle with l = " << l << " and b = " << b << endl;
    }

    // Display Function
    void display() const {
        cout << "Rectangle Dimensions: l = " << l << ", b = " << b << endl;
    }
};

int main() {
    // Original object
    Rectangle obj1(10, 20);
    obj1.display();

    // Shallow Copy
    Rectangle obj2(obj1, true); // Explicitly invoke shallow copy
    obj2.display();

    // Modify obj2 (shallow copy effect is conceptual here)
    obj2.l = 30;
    obj2.b = 40;
    cout << "After modifying shallow copy:" << endl;
    obj1.display();
    obj2.display();

    // Deep Copy
    Rectangle obj3 = obj1; // Implicitly invoke deep copy
    obj3.display();

    // Modify obj3
    obj3.l = 50;
    obj3.b = 60;
    cout << "After modifying deep copy:" << endl;
    obj1.display();
    obj3.display();

    return 0;
}
