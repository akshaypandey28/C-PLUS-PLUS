#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void f1() {}
    void f2() {}
};

//On defining in B f2(int x), it hides f2() of A in the scope of B. This is called method hiding 
//(not overriding, because the signatures are different)
class B: public A{
    public:
    void f1(){    //Method overriding
        cout<<"ak"<<endl; 
    } 
    void f2(int x){    //Method hiding
        cout<<"akp"<<endl; 
    } 
};
int main(){
    B obj;
    obj.f1(); // B wala call होगा
    //obj.f2(); // Error bcoz B mei without parameter f2 nahi exist karta
    obj.f2(4); // B wala call होगा

    //to call the parent version => use scope resolution
    obj.A::f2(); //scope resolution
return 0;
}