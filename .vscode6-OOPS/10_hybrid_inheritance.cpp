#include <iostream>
using namespace std;

// Base Class
class Person {
public:
    void displayPerson() {
        cout << "I am a Person\n";
    }
};

// Two classes derived from Person (Hierarchical Inheritance)
class Teacher : public Person {
public:
    void displayTeacher() {
        cout << "I am a Teacher\n";
    }
};

class Engineer : public Person {
public:
    void displayEngineer() {
        cout << "I am an Engineer\n";
    }
};


class Principal : public Teacher, public Engineer {
public:
    void displayPrincipal() {
        cout << "I am a Principal\n";
    }
};

int main() {
    Principal obj;
    obj.displayTeacher();    // From Teacher
    obj.displayEngineer();   // From Engineer
    obj.displayPrincipal();  // From Principal
    return 0;
}

/* 
Hierarchical: Teacher and Engineer both inherit from the same base class Person.

Multiple: Principal inherits from both Teacher and Engineer.

This combination forms Hybrid Inheritance.
*/