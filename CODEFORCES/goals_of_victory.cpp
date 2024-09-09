#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        n=n-1;
        int sum=0;
        while(n--) {
            int x; cin>>x;
            sum+=x;
        }
        cout<<-sum<<endl;
    }
return 0;
}