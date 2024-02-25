#include<bits/stdc++.h>
using namespace std;

bool isItSafe(vector<vector<int>> &grid,int i,int j,int n){
    return i>=0 and j>=0 and i<n and j<n and grid[i][j]==-1;
}
vector<int> dx{-2,-1,-2,-1,+2,+1,+2,+1};
vector<int> dy{+1,+2,-1,-2,+1,+2,-1,-2};

void display(vector<vector<int>> &grid,int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<grid[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void f(vector<vector<int>> &grid,int i,int j,int n,int count){
    //from i,j we can go to total 8 positions
    //for every position we can only go if it is safe
    if(count==(n*n) - 1){ //last position
        grid[i][j]=count;
        display(grid,n);
        cout<<"******\n";
        grid[i][j]=-1;
        return ;
    }
    for(int k=0; k<8; k++){ //here there are total of 8 function calls but this is done by loop

        if(isItSafe(grid,i+dx[k],j+dy[k],n)){
        grid[i][j]=count;
        f(grid,i+dx[k],j+dy[k],n,count+1);
        grid[i][j]=-1;
        }

    }


}

void knightsTour(int n,int i,int j){
    vector<vector<int>> grid(n,vector<int>(n,-1)); //-1 denotes position is vacant
    f(grid,i,j,n,0);
}
int main(){
    knightsTour(5,0,0);
return 0;
}