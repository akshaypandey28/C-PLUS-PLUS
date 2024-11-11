#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/surrounded-regions/description/ */
/* https://leetcode.com/problems/number-of-enclaves/description/ */

//Surrounded regions
class Solution {
public:
    void dfs(vector<vector<char>>& b,int r,int c,int m,int n){
        if(r<0 or r>=m or c<0 or c>=n or b[r][c]!='O') return ;
        b[r][c]='E';

        dfs(b,r-1,c,m,n);
        dfs(b,r+1,c,m,n);
        dfs(b,r,c-1,m,n);
        dfs(b,r,c+1,m,n);
    }
    void solve(vector<vector<char>>& b) {
        int m=b.size();
        int n=b[0].size();
        //mark all border O to E using bfs or dfs
        for(int i=0; i<m; i++){ //for col 0 and col n-1
            dfs(b,i,0,m,n);
            dfs(b,i,n-1,m,n);
        }
        for(int i=0; i<n; i++){ //for row 0 and row m-1
            dfs(b,0,i,m,n);
            dfs(b,m-1,i,m,n);
        }

        //those cells which are E are marked into O and those which are marked with O are marked with X
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(b[i][j]=='E') b[i][j]='O';
                else if(b[i][j]=='O') b[i][j]='X';
            }
        }
        return ;
    }
};

//Number of enclaves
class Solution {
public:
    //same as of surrounding regions
    void dfs(vector<vector<int>>& grid,int r,int c,int m,int n){
        if(r<0 or r>=m or c<0 or c>=n or grid[r][c]!=1) return ;
        grid[r][c]=-1;

        dfs(grid,r-1,c,m,n);
        dfs(grid,r+1,c,m,n);
        dfs(grid,r,c-1,m,n);
        dfs(grid,r,c+1,m,n);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        //mark all border 1 to -1 using bfs or dfs
        for(int i=0; i<m; i++){ //for col 0 and col n-1
            dfs(grid,i,0,m,n);
            dfs(grid,i,n-1,m,n);
        }
        for(int i=0; i<n; i++){ //for row 0 and row m-1
            dfs(grid,0,i,m,n);
            dfs(grid,m-1,i,m,n);
        }
        int count=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1) count++;
            }
        }
        return count;
    }
};
int main(){
return 0;
}