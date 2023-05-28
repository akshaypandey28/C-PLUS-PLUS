#include<bits/stdc++.h>
using namespace std;
void f(vector<int> &v,int n, int idx,int targetvalue,vector<int> &result){
    if(idx==n){ return ;}
    if(targetvalue==v[idx]){
        result.size()+1;
        result[idx]=idx;
        f(v, n, idx+1, targetvalue,result);
    }
    else{ f(v, n, idx+1, targetvalue,result);  }
}
int main(){
    int n; cin>>n; vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];  }
    int targetvalue; cin>>targetvalue;
    vector<int> result;
    f(v,n,0,targetvalue,result);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
return 0;
}