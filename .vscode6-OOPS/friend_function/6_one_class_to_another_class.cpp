#include<iostream>
using namespace std;
class A{
public:
    void fun(){

    }
    void foo(){

    }
};
//friend function has no effect of private public and protected because friend function is not the 
//member of the class
class B {
    
    /* alternative 
    friend void A::fun(); 
    friend void A::foo(); 
    */
   friend class A;
};

void fun(){

}
int main(){
return 0;
}