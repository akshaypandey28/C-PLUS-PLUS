#include<bits/stdc++.h>
using namespace std;
class a{
public:
    int x;
    a(){

    }
    a(int y){
        x=y;
    }
    friend void print(a &obj); 
    friend a operator +(a &obj1,a &obj2);
};
a operator +(a &obj1,a &obj2){
    a obj;
    obj.x+=obj1.x + obj2.x;
    return obj;
}
void print(a &obj){

    cout<<obj.x<<endl; 
}
int main(){
    a obj1(5);
    a obj2(19);
    print(obj1); 
    a obj3;
    obj3=obj1+obj2;
    print(obj3);
return 0;
}