#include<bits/stdc++.h>
using namespace std;
class a{
    int x;
    public:
    a(int y){
        x=y;
    }
    friend void print(a &obj);
};
void print(a &obj){
    cout<<obj.x<<endl;
}
int main(){
    a obj(5);
    print(obj);

return 0;
}