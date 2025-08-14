#include<iostream>
using namespace std;
class Static{
private:
    int x; //instance member variable and by default garbage value
    static int y; //static member variable or class member variable and by default zero value
public:
    void setX(int n){
        x=n;
    }

    //static function can only access static data members
    static void setY(int n){ //static member function or class member function
        y=n;
    }
};

int Static:: y;  //Static::   called membership level

int main(){
    Static s;
    s.setY(4);
    //for static , this static member function is called by
    Static::setY(5);
return 0;
}


/* 
#include<iostream>
using namespace std;
int main(){
    static int x; //static local variable by default zero value
}
 */