#include<bits/stdc++.h>
using namespace std;
/* https://www.geeksforgeeks.org/problems/steps-by-knight5927/1 */
class Solution 
{
    public:
    
    //Function to find out minimum steps Knight needs to reach target position.
    int bfs(int x,int y,int tx,int ty,vector<vector<int>> &vis,int n){
        int ans=INT_MAX;
        vector<pair<int,int>> dir={
            {2,1},{2,-1},{-2,1},{-2,-1},
            {1,2},{1,-2},{-1,2},{-1,-2}
        };
        
        queue<pair<pair<int,int>,int>> qu; //{{x,y}=>current position , gives the minimum number of moves}
        
        qu.push({{x,y},0});
        vis[x][y]=1;
        while(qu.empty()!=1){
            int row=qu.front().first.first;
            int col=qu.front().first.second;
            
            int count=qu.front().second;
            qu.pop();
            
            if(row==tx and col==ty) return count;
            
            for(auto d:dir){ //traversing of direction vector to go for all possibilities for all direction
            //from current position
            
                int r=row+d.first;
                int c=col+d.second;
                
                if(r>=0 and r<n and c>=0 and c<n and vis[r][c]==0){
                    qu.push({{r,c},count+1});
                    vis[r][c]=1;
                }
            }
        }
        return -1;
    }
	int minStepToReachTarget(vector<int>&KPos,vector<int>&TPos,int N)
	{
	    // Code here
	    vector<vector<int>> vis(N,vector<int>(N,0));
	    return bfs(KPos[0]-1,KPos[1]-1,TPos[0]-1,TPos[1]-1,vis,N);
	    
	}
};
int main(){
return 0;
}