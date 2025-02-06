#include<bits/stdc++.h>
using namespace std;
class student{
public:
    string name;
    string colour;
};
int main(){
    student akshay; //object
    akshay.name="apple";
    akshay.colour="red";
    cout<<akshay.name<<"--"<<akshay.colour<<endl;
    student *mango=new student();
    mango->name="MANGO";
    mango->colour="YELLOW";
    cout<<mango->name<<"--"<<mango->colour<<endl;
return 0;
}
