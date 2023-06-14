#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a;
    int sum=0;
    int ans=0;
    int i=1;
    int count=0;
    while(sum+ans+i<=n){
        ans+=i;
        sum+=ans;
        i++;
        count++;
    }
    cout<<count<<endl;
return 0;
}