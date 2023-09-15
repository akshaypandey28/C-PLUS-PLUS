#include<bits/stdc++.h> //count no of setbits
using namespace std;
int main(){
    // int a=22,b=21;
    // int c=a&b;
    // cout<<c<<endl;
    int n; cin>>n;
    int count=0;
    while(n>0){
        count++;
        n=n&(n-1);
    }
    cout<<count<<endl;
    cout<<__builtin_popcount(n)<<endl;
return 0;
}