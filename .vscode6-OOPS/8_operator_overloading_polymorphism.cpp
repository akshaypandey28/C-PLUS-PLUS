#include<bits/stdc++.h> //operator overloading
using namespace std;
class Complex{
    public:
    int real;
    int img;
    Complex(int x,int y){
        real=x;
        img=y;
    }
    Complex operator+ (Complex &c2){ //Complex &c2 this is the object of an Complex class
        Complex ans(0,0); //new object for c3
        ans.real=this->real+c2.real; //this->real is of c1 and c2.real of c2
        ans.img=this->img+c2.img; // this->img is of c1 and c2.img of c2
        return ans; 
    }
};
int main(){
    Complex c1(1,2);
    Complex c2(1,3);
    Complex c3=c1+c2; //c1.operator+(c2);
    cout<<c3.real<<" i"<<c3.img<<endl;
return 0;
}