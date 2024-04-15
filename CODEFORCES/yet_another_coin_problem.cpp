#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[15]={0,1,2,1,2,3,1,2,3,2,1,2,2,2,3};
        if(n>15) {
            a[5]=1; //becauase whenever remainder is 5 and 8 it creates the problem on the test cases
            a[8]=2;
        }
        int ans=n/15 + a[n%15];
        cout<<ans<<endl;
    }
return 0;
}