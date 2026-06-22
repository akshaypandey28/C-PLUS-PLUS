#include<iostream>
#include<memory>
using namespace std;
int main(){
    shared_ptr<int> p1(new int(10));
    weak_ptr<int> p2=p1;
    cout<<*(p2.lock())<<endl;

return 0;
}