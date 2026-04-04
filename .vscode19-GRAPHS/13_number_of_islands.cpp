#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/number-of-islands/description/ */
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        int cc=0; //stores the number of connected component
        for(int r=0; r < rows; r++){
            for(int c=0; c < cols; c++){
                if(grid[r][c]=='0') continue;  //it is a water body
                cc++;
                grid[r][c]='0'; //marked it visited
                queue<pair<int ,int> > qu;
                qu.push({r,c}); //store the src node
                while(qu.empty()!=1){
                    auto curr=qu.front();//get one node from queue
                    qu.pop();
                    //go to all unvisited neighbours of the curr node
                    int currRow=curr.first;
                    int currCol=curr.second;
                    //check up
                    if(currRow-1 >= 0 and grid[currRow-1][currCol]=='1'){
                        qu.push({currRow-1,currCol});
                        grid[currRow-1][currCol]='0';
                    }
                    //check down
                    if(currRow+1 < rows and grid[currRow+1][currCol]=='1'){
                        qu.push({currRow+1,currCol});
                        grid[currRow+1][currCol]='0';
                    }
                    //check left
                    if(currCol-1 >= 0 and grid[currRow][currCol-1]=='1'){
                        qu.push({currRow,currCol-1});
                        grid[currRow][currCol-1]='0';
                    }
                    //check right
                    if(currCol+1 < cols and grid[currRow][currCol+1]=='1'){
                        qu.push({currRow,currCol+1});
                        grid[currRow][currCol+1]='0';
                    }
                }
            }
        } 
        return cc;   
    }
};
int main(){
return 0;
}


/* 
class Solution {
public:
    int n,m;
    void dfs(int r,int c,vector<vector<char>>& grid){
        if(r<0 or r>=n or c<0 or c>=m or grid[r][c]=='0' ) return ;

        grid[r][c]='0'; //mark as visited
        vector<int> dir={-1,0,1,0,-1};
        for(int i=0; i<4; i++){
            dfs(r+dir[i],c+dir[i+1],grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int connected_component=0;
        this->n=grid.size();
        this->m=grid[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,grid);
                    connected_component++;
                }
            }
        }
        return connected_component;
    }
};
*/