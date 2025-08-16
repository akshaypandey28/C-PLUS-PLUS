//Friend function is a non member function of the class which can access private members of the class
#include<bits/stdc++.h>
using namespace std;
class a{
    int x;
    public:
    a(int y){
        x=y;
    }
    friend void print(a &obj); //friend function is not a member of the class 
    //friend function cannot access members of the class directly
    //here object is used to access members of the class
};
void print(a &obj){ //it should not be defined with membership label

    cout<<obj.x<<endl; //friend function cannot access members of the class directly , here object 
    //is used to access members of the class
}
int main(){
    a obj(5);
    print(obj); //friend function has no caller object , here it is called directly

return 0;
}