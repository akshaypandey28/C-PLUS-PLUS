//Each object has its own copy of data.
#include <iostream>
using namespace std;

class Deep {
public:
    int *data;

    Deep(int value) {
        data = new int(value);
    }

    // Custom Deep Copy Constructor
    Deep(const Deep &obj) {
        cout << "Deep Copy Constructor Called\n";
        data = new int(*obj.data);   // New memory
    }

    void display(){
        cout<<"data = "<<*data<<endl;
    }

    ~Deep() {
        delete data;
    }
};

int main() {
    Deep d1(10);
    Deep d2 = d1;
    cout<<"before modifying"<<endl;
    d1.display();
    d2.display();
    *d2.data = 50;
    cout<<"after modifying"<<endl;
    d1.display();
    d2.display();
}