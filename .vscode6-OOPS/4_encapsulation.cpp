#include<bits/stdc++.h>
using namespace std;
class ABC{
    int x;
    public:
    void set(int x){
        this->x=x;
    }
    int get(){
        return x;
    }
};
int main(){
    ABC obj1;
    obj1.set(5);
    cout<<obj1.get()<<endl;
return 0;
}