#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m>>k;
        int a[n],b[m];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<m; i++) cin>>b[i];
        set<int> s1,s2;
        for(int i=0; i<n; i++){
            if(a[i]<=k) {
                s1.insert(a[i]);
            }
        }
        for(int i=0; i<m; i++){
            if(b[i]<=k) {
                s2.insert(b[i]);
            }
        }
        int count1=0; //for set 1 unique
        int count2=0; //for set 2 unique
        bool flag=false;
        for(int i=1; i<=k; i++){
            flag=false;
            if(s1.count(i)) {
                count1++;
                flag=true;
            }
            if(s2.count(i)) {
                count2++;
                flag=true;
            }
            if(flag==false) break;
        }
        
        if(flag==false) cout<<"NO"<<endl;
        else if(count1>=k/2 and count2>=k/2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}