#include<iostream>
using namespace std;
int add(int a,int b=0,int c=1){
    return (a+b+c);
}
int main(){
    cout<<add(5)<<endl;
    cout<<add(5,6)<<endl;
    cout<<add(5,6,7)<<endl;


    return 0;
}