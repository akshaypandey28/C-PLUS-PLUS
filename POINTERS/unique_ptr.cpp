#include<iostream>
#include<memory>
using namespace std;
int f1(){
    unique_ptr<int> p(new int(10)); //here i'm calling the construtor of unique_ptr by passing new int(10)

    unique_ptr<int> p2 = make_unique<int>(20);
}
int main(){
return 0;
}