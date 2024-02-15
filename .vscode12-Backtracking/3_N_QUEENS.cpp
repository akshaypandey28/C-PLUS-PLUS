#include<bits/stdc++.h>
using namespace std;
bool canPlaceQueen(int Row,int col,vector<vector<char>> &grid){
    for(int i=Row-1; i>=0; i--){ //is someOne attacking from vertically up column check
        if(grid[i][col]=='Q'){ //we are attacked
            return false;
        }
    }
    for(int i=Row-1,j=col-1; i>=0&&j>=0; i--,j--){  //diagonally left
        if(grid[i][j]=='Q'){ //we are attacked
            return false;  
        }
    }
    for(int i=Row-1,j=col+1; i>=0&&j<grid.size(); i--,j++){ //diagonally right
        if(grid[i][j]=='Q'){ //we are attacked
            return false;   
        }
    }
    return true;   //no attack found
}
void n_QUEENS(int currRow,int n,vector<vector<char>> &grid){
    if(currRow==n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<grid[i][j]<<" ";  
            }
            cout<<endl;  
        }
        cout<<endl;
        cout<<"*****"<<endl;
        cout<<endl;
    }
    for(int col=0; col<n; col++){ //we will go all the cols
        if(canPlaceQueen(currRow,col,grid)){ //lets check if we 
            grid[currRow][col]='Q'; //can place a queen at currRow and col
            n_QUEENS(currRow+1,n,grid);
            grid[currRow][col]='.';     
        }
    }  
}
int main(){
    int n; cin>>n;
    vector<vector<char>> grid(n,vector<char>(n,'.'));
    n_QUEENS(0,n,grid);   
    return 0;  
}