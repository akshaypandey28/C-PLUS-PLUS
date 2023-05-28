/* Q1. Given a m*n matrix, Write a function which returns true if the matrix is a perfect matrix. A matrix is
called perfect if every diagonal from top-left to bottom-right has the same elements. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n; cin>>m>>n; int array[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>array[i][j]; }   }
        bool flag;
        for(int i=0; i<m-1; i++){
            for(int j=0; j<n-1; j++){
                if(array[i][j] == array[i+1][j+1]){
                    flag=true;
                }
                else{
                    flag=false;
                    break;
                }
            }
        }
        if(flag==true){
            cout<<"THE MATRIX IS PERFECT"<<endl;
        }
        else{
            cout<<"THE MATRIX IS NOT PERFECT"<<endl;
        }
return 0;
}