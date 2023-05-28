// greatest common divisor
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y; cin>>x>>y; int ans; int result; int actual; int maximum=max(x,y);
    for(int i=1; i<=maximum; i++){
        if(x%i==0){
            ans=i;
        }
        if(y%i==0){
            result=i;
        }
        if(ans==result){
            actual=result;
        }
    }
    cout<<actual<<endl;
return 0;
}