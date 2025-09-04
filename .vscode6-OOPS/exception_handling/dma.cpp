#include<iostream>
#include<exception>
using namespace std;

class Exception{
    protected:
    string msg;

    public:
    Exception(string s){
        this->msg=s;
    }

    void what(){
        cout<<msg<<endl;
    }
};
int main(){
    try{
        int *p=new int[10000000];
        cout<<"memory allocated successfully"<<endl;
        delete []p;
    }
    catch(const bad_alloc &e){ //exception
        cout<<"exception occured due to line 6 "<<e.what()<<endl;
    }

return 0;
}