#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int a,b,n; cin>>a>>b>>n;
        int x=0;
        int count=0;
        while(x<=n){
            if(a<b){
                x=a+b;
                a=x;
                count++;
            }
            else{
                x=a+b;
                b=x;
                count++;
            }
        }
        cout<<count<<endl;
    }
return 0;
}