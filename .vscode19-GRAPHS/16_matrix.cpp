#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/01-matrix/description/ */

/* https://leetcode.com/problems/map-of-highest-peak/description/?envType=daily-question&envId=2025-01-22 */
//same as matrix 01
class Solution {
public:
//apply multisource bfs from 0's
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,pair<int,int>>> qu; //{distance,{x,y}}
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n,0)); //0 tells not visited
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]==0){
                    qu.push({0,{i,j}});
                    vis[i][j]=1; //marked as visited as zeros distance from itself is 0
                }
            }
        }
        //0 is already visited so whenever queue is traversed then it doesn't update the distance for 0 as it   
        //is marked as 1 , so it works only for cell whose value is mat[i][j]==1 and update it's distance from nearest zero
        vector<int> dir={-1,0,1,0,-1}; //direction for up down left right
        while(qu.empty()!=1){
            auto curr=qu.front();
            qu.pop();
            int distance=curr.first;
            int x=curr.second.first;
            int y=curr.second.second;

            for(int i=0; i<4; i++){
                int a=x+dir[i]; //a and b are coordinate for moving up down left right from (x,y)
                int b=y+dir[i+1];
                //basically a checks for row and b checks for col
                if(a>=0 and a<m and b>=0 and b<n and vis[a][b]==0){
                    qu.push({distance+1,{a,b}});
                    vis[a][b]=1;
                    mat[a][b]=distance+1;
                }
            }
        }
        return mat;
    }
};




class Solution {
public:
    //multisource bfs same as 01 matrix

    //basically whole code manages itself in such a way that at every point of height calculation
    //it will go for the max height of the particular cell
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m=isWater.size();
        int n=isWater[0].size();

        vector<vector<int>> ans(m,vector<int>(n,0)); //initially all cell will be zero 

        queue<pair<int,pair<int,int>>> qu; //{distance,{x,y}}
        //If the cell is a water cell, its height must be 0
        vector<vector<bool>> vis(m,vector<bool>(n,0)); //0 tells not visited

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(isWater[i][j]==1){
                    qu.push({0,{i,j}});
                    vis[i][j]=1; //marked as visited as water cell height is 0
                }
            }
        }
        vector<int> dir={-1,0,1,0,-1}; //direction for up down left right
        while(qu.empty()!=1){
            auto curr=qu.front();
            qu.pop();
            int distance=curr.first;
            int x=curr.second.first;
            int y=curr.second.second;

            for(int i=0; i<4; i++){
                int a=x+dir[i]; //a and b are coordinate for moving up down left right from (x,y)
                int b=y+dir[i+1];
                //basically a checks for row and b checks for col
                if(a>=0 and a<m and b>=0 and b<n and vis[a][b]==0){
                    qu.push({distance+1,{a,b}});
                    vis[a][b]=1;
                    ans[a][b]=distance+1;
                }
            }
        }
        return ans;
    }
};
int main(){
return 0;
}