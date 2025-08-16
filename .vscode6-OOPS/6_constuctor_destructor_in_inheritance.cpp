//In C++, when a child class (derived class) is instantiated, the constructor of the parent class
//(base class) is called first followed by the constructor of the child class

//In C++, when a child class (derived class) is destroyed, the destructor of the child class is called 
//first,followed by the destructor of the parent class (base class)
#include<iostream>
using namespace std;
class A{
    int a;
public:
    A(){
        cout<<"contructor of class A"<<endl;
    }
    A(int x){
        a=x;
        cout<<"value of a is "<<a<<endl;
    }

    //destructor
    ~A(){
        cout<<"DESTRUCTOR IS CALLED OF CLASS A"<<endl;
    }
};
class B:public A{
    int b;
public:
    B():A(){ //this will call the contructor of parent class here class A
        cout<<"contructor of class B"<<endl;
    }
    B(int x,int y):A(x){
        b=y;
        cout<<"value of b is "<<b<<endl;
    }

    //destructor
    ~B(){
        cout<<"DESTRUCTOR IS CALLED OF CLASS B"<<endl;
    }
};
int main(){
    B obj;
    B obj1(2,3);
return 0;
}