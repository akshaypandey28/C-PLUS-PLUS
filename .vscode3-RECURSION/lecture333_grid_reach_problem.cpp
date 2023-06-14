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
    int m,n; cin>>m>>n;
    vector<string> v;
    string s="";
    grid_reach(v,m,n,0,0,s);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";  }
return 0; }