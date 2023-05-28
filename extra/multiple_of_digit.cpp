#include<bits/stdc++.h>
using namespace std;
void multiple(int n,int k){
    if(k==0){
        return;
    }
    multiple(n,k-1);
    cout<<n*k<<" ";
}
int main(){
    int n,k; cin>>n>>k;
    multiple(n,k);
return 0;
}