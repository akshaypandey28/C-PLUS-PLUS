#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int l=0,r=n-1;
        while(l<r){
            if(s[l]!=s[r]) n-=2;
            else break;
            l++;
            r--;
        }
        cout<<n<<endl;
    }
return 0;
}