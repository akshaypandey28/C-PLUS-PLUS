#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0 && n<=9){ //also(n==0){  return 0; }
        return n;
    }
    int ans=n%10 +sum(n/10);
    return ans;
}
int main(){
    int n; cin>>n;
    cout<<"sum of digits is "<<sum(n)<<endl;
return 0;
}