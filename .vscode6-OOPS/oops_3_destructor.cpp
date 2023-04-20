#include<bits/stdc++.h>
using namespace std;
class rectangle{
    public:
    int l,b;
    rectangle(){ //default constructor no args passed
        l=0; b=0;
    }
    rectangle(int x,int y){ //parametrised constructor
        l=x; b=y; }
    rectangle(rectangle &r){  //copy constructor initialise an obj by another existing obj
        l=r.l;
        b=r.b;
    }
    ~rectangle(){ //destructor
        cout<<"DESTRUCTOR IS CALLED"<<endl;
    }
};
int main(){
    rectangle *obj=new rectangle();
    cout<<obj->l<<"----"<<obj->b<<endl;
    delete obj;

    rectangle obj2(1,2);
    cout<<obj2.l<<"--"<<obj2.b<<endl;

    rectangle obj3=obj2;
    cout<<obj3.l<<"---"<<obj3.b<<endl;
return 0;
}