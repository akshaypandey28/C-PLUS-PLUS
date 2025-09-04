#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    
    try{
        if(b==0) throw "Division by zero is not allowed";
        int c=a/b;
        cout<<c<<endl;
    }
    catch(const char *msg){
        cout<<"Exception occured: "<<msg<<endl;
    }

return 0;
}