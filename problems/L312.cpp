#include<bits/stdc++.h>
using namespace std;
int f(int n, int val_sum){
    int ans=0;
    if(n==1 && val_sum>=0){
        return 1;
    }
    for(int i=0; i<=val_sum; i++){
        ans=ans+f(n-1,val_sum-i);
    }
    return ans;
}
int main(){
    int n,val_sum;
    cin>>n>>val_sum;
    int result=f(n,val_sum);
    cout<<"the number of such non negative integral solution that are possible "<<result<<"\n";

return 0;
}