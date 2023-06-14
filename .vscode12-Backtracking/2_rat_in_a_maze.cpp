#include<bits/stdc++.h>
using namespace std;
bool canBeGo(int a,int b,vector<vector<int>> &grid){
    return (a<grid.size() && b<grid.size() && a>=0 && b>=0) && grid[a][b]==1 ;
}
int rat(int i,int j,vector<vector<int>> &grid){
    int n=grid.size();
    if(i==n-1 && j==n-1){
        return 1; }
    int ans=0;
    grid[i][j]=2; //changing 
    if(canBeGo(i,j+1,grid)){
    ans+=rat(i,j+1,grid);   } //right 

    if(canBeGo(i+1,j,grid)){  
    ans+= rat(i+1,j,grid);   }  // down
    
    if(canBeGo(i,j-1,grid)){
    ans+=rat(i,j-1,grid);  }// left
    
    if(canBeGo(i-1,j,grid)){
    ans+=rat(i-1,j,grid);   }// up
    
    grid[i][j]=1; //reverse the changes
    return ans;
}
int main(){
    int n;cin>>n;    vector<vector<int>> grid(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>grid[i][j]; }   }
    int result =rat(0,0,grid);
    cout<<"the no of possible ways is "<<result<<endl;
return 0;
}