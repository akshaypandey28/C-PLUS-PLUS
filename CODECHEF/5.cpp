#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
       int n,k,l; cin>>n>>k>>l;
        vector<long long> v;
        set<int> s;
        while(n--){
           long long a,b; cin>>a>>b;
           if(b==l){
               s.insert(a);}
          }
       
        long long sum=0;
        set<int>::iterator itr;
        for(itr=s.begin(); itr!=s.end(); itr++){
            v.push_back(*itr);
        }
        sort(v.begin(),v.end(),greater<long long>());
        if(v.size()==0){
           cout<<-1<<endl; }
        else{
           for(int i=0; i<k; i++){
           sum+=v[i]; }
        }
        if(sum>0){
            cout<<sum<<endl;
        }
           
       

    }
return 0;
}