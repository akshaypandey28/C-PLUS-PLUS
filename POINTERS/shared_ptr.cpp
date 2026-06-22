#include<iostream>
#include<memory>
using namespace std;
int main(){

    shared_ptr<int> p1(new int(10));
    shared_ptr<int> p2,p3;

    p2=p1;
    cout<<"before"<<endl;
    cout << p1.use_count() << endl;
    cout << p2.use_count() << endl;
    cout<<p3.use_count()<<endl;


    p3=move(p2); //transfers ownership from p2 to p3, p2 becomes empty (nullptr)
    p1.reset(); //p1 releases its ownership and becomes empty
    cout<<"after"<<endl;
    cout<<p1.use_count()<<endl;
    cout<<p2.use_count()<<endl;
    cout<<p3.use_count()<<endl;


    shared_ptr<int> p4 = make_shared<int>(10);
return 0;
}