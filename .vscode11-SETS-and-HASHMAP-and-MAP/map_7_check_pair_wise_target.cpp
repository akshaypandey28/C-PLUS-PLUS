#include<bits/stdc++.h>
using namespace std;
vector<int> targetSumPair(vector<int> &v,int target){
    unordered_map<int,int> m;  vector<int> a(2,-1);
    for(int i=0; i<v.size(); i++){
        int x=target-v[i];
        if(m.find(target-v[i])!=m.end()){
            a[0]=m[target-v[i]];
            a[1]=i;
            return a;  }
        else{
            m[v[i]]=i;  }
    }
    return a;   }
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i]; }
    cout<<"target is ";
    int target; cin>>target;
    vector<int> ans=targetSumPair(a,target);
    cout<<ans[0]<<"  "<<ans[1]<<endl;
return 0;    }