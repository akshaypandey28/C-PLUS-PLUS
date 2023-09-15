#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void sum(int n,int m,int r,int c,int &count){
    if(r==n-1 && c==m-1){
        count++;
        //return 1;
    }
    if(r>n || c>m){
        return ;
    }
    sum(n,m,r+1,c,count);
    sum(n,m,r,c+1,count);
}
int main(){
	int t; cin>>t;
    while(t--){
        // your code goes here
// int n,m,k; cin>>n>>m>>k;
    int n,m; cin>>n>>m;

        int count=0;
        sum(n,m,0,0,count);
        //cout<<count<<"   "<<result<<endl;
        if(count<=k){
            cout<<k<<endl;
        }
        else{
            cout<<1<<endl;
        }
        
        
    }
return 0;
}
#include<bits/stdc++.h>
using namespace std; //maze_path or grid_problem
void grid_reach(vector<string> &v,int m,int n,int r,
   int c, string s){
    if(r==m-1 && c==n-1){
        v.push_back(s);
        return ;  }
    if(r>=m || c>=n){
        return ;  }
    grid_reach(v,m,n,r,c+1,s+"R");
    grid_reach(v,m,n,r+1,c,s+"D");
}
int main(){
    int t; cin>>t;
    while(t--){
        int m,n,k; cin>>m>>n>>k;
    vector<string> v;
    string s="";
    grid_reach(v,m,n,0,0,s);
    // sort(v.begin(),v.end());
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";  }
    if(v.size()<=k){
        cout<<k<<endl;
    }
    else{
        cout<<1<<endl;
    }
    }
    
return 0; }