#include<bits/stdc++.h> //operator overloading
using namespace std;
class comple{
    public:
    int real;
    int img;
    comple(int x,int y){
        real=x;
        img=y;
    }
    comple operator+ (comple &c2){ //complex &c2 this is the object of an complex class
    comple ans(0,0);
    ans.real=real+c2.real; //real is of c1 c.real of c2
    ans.img=img+c2.img; // same for this
    return ans; 
    }
};
int main(){
    comple c1(1,2);
    comple c2(1,3);
    comple c3=c1+c2;
    cout<<c3.real<<" i"<<c3.img<<endl;
return 0;
}