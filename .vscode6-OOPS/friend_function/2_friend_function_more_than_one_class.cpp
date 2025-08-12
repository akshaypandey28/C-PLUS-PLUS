#include<bits/stdc++.h>
using namespace std;
class b;
class a{
    int x;
    public:
    a(int n){
        x=n;
    }
    friend void print(a &obj1,b &obj2); 
};
class b{
    int y;
    public:
    b(int n){
        y=n;
    }
    friend void print(a &obj1,b &obj2);
};
void print(a &obj1,b &obj2){

    cout<<"x value of class a is "<<obj1.x<<endl; 
    cout<<"x value of class b is "<<obj2.y<<endl;
}
int main(){
    a obj1(5);
    b obj2(10);
    print(obj1,obj2); 

return 0;
}