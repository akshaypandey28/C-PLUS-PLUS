#include<bits/stdc++.h> //Runtime Polymorphism
using namespace std;
//parent class ke pointer me child class ke memory allocate krne ke bad agar hume child class ke kisi
//method ko access krna hai to same method ko parent class me virtual declare krna must hai
//agar nhi krte hai to parent class ka method run hoga

//Pure Virtual Function agar hum parent class me declare krte hai to child class me override krna
//must hai
class parent{
    public:
    virtual void al()=0; //Pure Virtual Function
    virtual void print(){
        cout<<"PARENT CLASS FIRST"<<endl;
    }
    void show(){
        cout<<"PARENT CLASS SECOND"<<endl;
    }
};
class child : public parent{
    public:
    void al(){
        cout<<"PURE VIRTUAL FUNCTION CONCEPT";
    }
    void print(){
        cout<<"CHILD CLASS OVERRIDE"<<endl;
    }
    void show(){
      cout<<"CHILD CLASS OVERRIDE AGAIN"<<endl;
    }
};
int main(){
    parent *p;
    child c;
    p=&c;
    p->print();
    p->show();
    p->al();
return 0;
}