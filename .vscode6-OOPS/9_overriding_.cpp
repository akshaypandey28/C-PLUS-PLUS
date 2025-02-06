#include<bits/stdc++.h>
using namespace std;
class parent{
    public:
    virtual void print(){
        cout<<"PARENT CLASS FIRST"<<endl;
    }
    void show(){
        cout<<"PARENT CLASS SECOND"<<endl;
    }
};
class child : public parent{
    public:
    void print(){
        cout<<"CHILD CLASS OVERRIDE"<<endl;
    }
    void show(){
      cout<<"CHILD CLASS OVERRIDE AGIAN"<<endl;
    }
};
int main(){
    parent *p;
    child c;
    p=&c;
    p->print();
    p->show();
return 0;
}