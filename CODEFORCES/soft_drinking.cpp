#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_toast=(k*l)/nl;
    int total_slices=d*c;
    int total_salt=p/np;
    int ans=min(total_toast/n,total_slices/n);
    cout<<min(ans,total_salt/n)<<endl;
return 0;
}