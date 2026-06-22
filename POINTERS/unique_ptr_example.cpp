#include <iostream>
#include <memory>

using namespace std;

class Test {
public:
    int value;

    Test(int v) : value(v) {
        cout << "Constructor: " << value << endl;
    }

    ~Test() {
        cout << "Destructor: " << value << endl;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {

    // 1. Create unique_ptr
    unique_ptr<Test> p1 = make_unique<Test>(10);

    // 2. Access object
    p1->display();
    cout << p1->value << endl;

    // 3. Check ownership
    if (p1)
        cout << "p1 owns the object\n";

    // 4. Move ownership
    unique_ptr<Test> p2 = move(p1);

    if (!p1)
        cout << "p1 is nullptr after move\n";

    p2->display();

    // 5. Get raw pointer
    Test* raw = p2.get();

    cout << "Raw Pointer Value = "
         << raw->value << endl;

    // 6. Reset (deletes current object)
    p2.reset(new Test(20));

    p2->display();

    // 7. Release ownership
    Test* releasedPtr = p2.release();

    if (!p2)
        cout << "p2 no longer owns object\n";

    cout << "Released Value = "
         << releasedPtr->value << endl;

    // Manual cleanup required after release
    delete releasedPtr;

    // 8. Array version
    unique_ptr<int[]> arr =
        make_unique<int[]>(5);

    for (int i = 0; i < 5; i++)
        arr[i] = (i + 1) * 10;

    cout << "Array: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}