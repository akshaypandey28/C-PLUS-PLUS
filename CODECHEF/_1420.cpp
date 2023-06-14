#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        set<int> s;
        int maxi=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            s.insert(a[i]);
            if(a[i]>maxi){
                maxi=a[i];
            }
        }
        vector<int> b(maxi+1,0);
        set<int> :: iterator itr;
        for(itr=s.begin(); itr!=s.end(); itr++){
            b[*itr]++;
        }
        int count=0;
        for(int i=1; i<maxi+1; i++){
            if(b[i]==0){
                count++;
            }
            if(count==2){
                break;
            }
        }
        if(count==2){
            cout<<s.size()+1<<endl;
        }
        else{
            cout<<s.size()<<endl;
        }
        
        
    }
return 0;
}