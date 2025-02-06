#include<iostream>
using namespace std;
class Complex{
private:
    int a,b;
public:
    void set(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"a :"<<a<<" b :"<<b<<endl;
    }
    friend Complex operator-(Complex &obj);
};

Complex operator-(Complex &obj){ //unary operator overloading
    Complex ans;
    ans.a=-obj.a;
    ans.b=-obj.b;
    return ans;
}
int main(){
    Complex c1;
    c1.set(2,3);
    Complex c2;
    c2=-c1; //unary operator overloading and operator-(c1)
    c2.show();
return 0;
}