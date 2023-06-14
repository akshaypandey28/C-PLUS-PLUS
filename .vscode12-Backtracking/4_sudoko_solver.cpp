#include<bits/stdc++.h> //leetcode 37
using namespace std;
bool canBePlace(vector<vector<char>> &board,int row,int col,char num){
    for(int j=0;j<9; j++){
        if(board[row][j]==num){
            return false;
        }
    }
    for(int i=0;i<9; i++){
        if(board[i][col]==num){
            return false;
        }
    }
    int r=(row/3)*3;
    int c=(col/3)*3;
    for(int i=r; i<(r+3); i++){
        for(int j=c; j<(c+3); j++){
            if(board[i][j]==num){
                return false;
            }
        }
    }
    return true;
}
bool sudoko(vector<vector<char>> &board,int row,int col){
    if(col==9){
        return sudoko(board,row+1,0);
    }
    if(row==9){
        return true;
    }
    if(board[row][col]=='.'){
        for(int num=1; num<=9; num++){
            if(canBePlace(board,row,col,'0'+num)){
                board[row][col]='0'+num;
                bool res=sudoko(board,row,col+1);
                if(res){
                    return true;
                }
                board[row][col]='.';
            }
        }
        return false;
    }
    else{
        return sudoko(board,row,col+1);
    }
}
int main(){
    vector<vector<char>> board(9,vector<char> (9));
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin>>board[i][j];
        }
    }
    sudoko(board,0,0);
    cout<<"after sudoko solving"<<endl;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}