#include<iostream>
using namespace std;
class Integer{
private:
    int x;
public:
    void setData(int a){
        x=a;
    }
    void showData(){
        cout<<"value of x is "<<x<<endl;
    }

    Integer operator++ (){ //pre increment
        Integer i;
        i.x=++x;
        return i;
    }

    Integer operator++(int){ //post increment
        Integer i;
        i.x=x++;
        return i;
    }
}; 
int main(){
    Integer i1;
    i1.setData(6);
    i1.showData(); //output 6

    //pre increment
    Integer i2;
    i2=++i1; //this line means i1.operator++(); 
    i2.showData(); //output 7
    i1.showData(); //output 7

    //post increment
    Integer i3;
    i3=i1++; //this line means i1.operator++(0);
    i3.showData(); //output 7
    i1.showData(); //output 8
return 0;
}