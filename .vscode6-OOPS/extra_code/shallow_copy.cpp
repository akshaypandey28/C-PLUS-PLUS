//Both objects point to the same memory location. Changing one affects the other.
#include <iostream>
using namespace std;

class Shallow {
public:
    int *data;

    Shallow(int value) {
        data = new int(value);
    }

    // Custom Shallow Copy Constructor
    Shallow(const Shallow &obj) {
        cout << "Shallow Copy Constructor Called\n";
        data = obj.data;   // Copy address only
    }

    void display(){
        cout<<"data = "<<*data<<endl;
    }
    ~Shallow() {
        // delete data;  // Don't do this here; causes double delete
    }

};

int main() {
    Shallow s1(10);
    Shallow s2 = s1;
    cout<<"before modifying"<<endl;
    s1.display();
    s2.display();
    *s2.data = 50;
    cout<<"after modifying"<<endl;
    s1.display();
    s2.display();
}