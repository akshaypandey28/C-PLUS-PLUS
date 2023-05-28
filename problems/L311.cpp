#include<bits/stdc++.h>
using namespace std;
void f(int n,int t, bool flag){
    cout<<n<<" ";
    if(flag==false && n==t){
        return;   }
    if(flag){
        if(n-5>0){
            f(n-5,t,true);    }
        else{
            f(n-5,t,false);   }  }
    else{
        f(n+5, t, false);
    }
}
int main(){
    int n; cin>>n;
    f(n,n,true);
return 0;
}