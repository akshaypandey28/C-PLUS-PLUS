#include<bits/stdc++.h>
using namespace std;
class f{
    public: 
    f(){
        cout<<"CLASS F"<<endl;
        cout<<"-------"<<endl;
    }
};
class e : public f{
    public:
    e(){
        cout<<"CLASS E"<<endl;
        cout<<"----------"<<endl;
    }
};
class d : public f{
    public:
    d(){
        cout<<"CLASS D"<<endl;
        cout<<"----------"<<endl;
    }
};
class b : public e{
    public:
    b(){
        cout<<"CLASS B"<<endl;
        cout<<"----------"<<endl;
    }
};
class c : public d{
    public:
    c(){
        cout<<"CLASS C"<<endl;
        cout<<"----------"<<endl;
    }
};
class a : public c,public b{
    public:
    a(){
        cout<<"CLASS A"<<endl;
        cout<<"----------"<<endl;
    }
};
int main(){
    a obj;

return 0;
}