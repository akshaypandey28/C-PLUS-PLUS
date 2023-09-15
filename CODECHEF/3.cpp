#include<bits/stdc++.h>
using namespace std;
int f(int &p,int q){
    q=q-1;
    if(q==0){
        return 1;
    }
    p=p+1;
    return f(p,q)*p;
}
int main(){
    int n=4;
    cout<<f(n,n);
return 0;
}