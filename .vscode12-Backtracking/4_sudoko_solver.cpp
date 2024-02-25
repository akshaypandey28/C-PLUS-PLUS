#include<bits/stdc++.h> //leetcode 37
/* https://leetcode.com/problems/sudoku-solver/ */
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
        if(row==9) return true;

        if(col==9) return sudoko(board,row+1,0);

        if(board[row][col]!='.') return sudoko(board,row,col+1);

        for(int num=1; num<=9; num++){
            if(canBePlace(board,row,col,'0'+num)){
                board[row][col]='0'+num;
                bool res=sudoko(board,row,col+1); //iska mtlb hai ki aage ka bacha hua sudoku solve ho gya to res=true hoga
                //and in this case aage ka kuch bhi check krne ka jrurat nhi hai aur return kr jana hai 
                //for this if statement is used
                if(res) return true;
                board[row][col]='.';
            }
        }

        return false; //upr khi bhi kuch return nhi kiya gya hai jo bhi return hai wo sirf if statement hai mtlb condition 
        //pr return hoga isliye return kiya gya hai false without any condition
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

/* 
5 3 . . 7 . . . .
6 . . 1 9 5 . . .
. 9 8 . . . . 6 .
8 . . . 6 . . . 3
4 . . 8 . 3 . . 1
7 . . . 2 . . . 6
. 6 . . . . 2 8 .
. . . 4 1 9 . . 5
. . . . 8 . . 7 9

after sudoko solving

5 3 4 6 7 8 9 1 2 
6 7 2 1 9 5 3 4 8 
1 9 8 3 4 2 5 6 7 
8 5 9 7 6 1 4 2 3 
4 2 6 8 5 3 7 9 1 
7 1 3 9 2 4 8 5 6 
9 6 1 5 3 7 2 8 4 
2 8 7 4 1 9 6 3 5 
3 4 5 2 8 6 1 7 9
 */