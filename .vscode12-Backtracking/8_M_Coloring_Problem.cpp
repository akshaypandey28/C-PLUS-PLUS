#include<bits/stdc++.h>
using namespace std;
/* https://www.geeksforgeeks.org/problems/m-coloring-problem-1587115620/1 */
class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    
    bool isSafe(int node,int color[],bool graph[101][101],int n,int col){ //col is color through coloring is done
        for(int k=0; k<n; k++){
            if(k!=node and graph[k][node]==1 and color[k]==col) return false;
        }   
        return true;
    }
    
    bool solve(bool graph[101][101], int m, int n,int color[],int node){
        if(node==n) return true;
        
        for(int i=1; i<=m; i++){
            if(isSafe(node,color,graph,n,i)){
                color[node]=i;
                if(solve(graph,m,n,color,node+1)) return true;
                color[node]=0;
            }
        }
        return false;
    }
    
    
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        int color[n]={0};
        if(solve(graph,m,n,color,0)) return true;
        return false;
    }
};
int main(){
return 0;
}