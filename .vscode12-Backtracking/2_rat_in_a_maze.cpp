#include<bits/stdc++.h>
using namespace std;
bool canBeGo(int a,int b,vector<vector<int>> &grid){
    return (a<grid.size() && b<grid.size() && a>=0 && b>=0) && grid[a][b]==1 ;
}
int rat(int i,int j,vector<vector<int>> &grid){
        int n=grid.size();

        if(i==n-1 && j==n-1){
            return 1; 
        }
        int ans=0;
        grid[i][j]=2; //changing visited mark
        if(canBeGo(i,j+1,grid)){ //right 
            ans+=rat(i,j+1,grid);   
        } 

        if(canBeGo(i+1,j,grid)){  // down
            ans+= rat(i+1,j,grid);   
        }  
    
        if(canBeGo(i,j-1,grid)){ // left
            ans+=rat(i,j-1,grid);  
        }
    
        if(canBeGo(i-1,j,grid)){ // up
            ans+=rat(i-1,j,grid);   
        }
    
        grid[i][j]=1; //reverse the changes by unvisited mark
        return ans;
}
int main(){
    int n; cin>>n;    
    vector<vector<int>> grid(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>grid[i][j]; 
        }   
    }
    int result =rat(0,0,grid);
    cout<<"the no of possible ways is "<<result<<endl;
return 0;
}