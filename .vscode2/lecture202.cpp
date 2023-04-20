#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> createspiral(int n,int m){
    vector<vector<int>> vec(n,vector<int>(m));
    int left=0;
    int right=vec[0].size()-1;
    int top=0; 
    int bottom=vec.size()-1;
    /* left =0, right =3, top =0, bottom =4 */
    int direction=0;
    while( left<=right || top<=bottom){   // there must be a condition for while loop always
        if(direction==0){ //left to right
        for(int j=left; j<=right; j++){
            cin>>vec[top][j];
        }    top++;}
        else if(direction==1){ // top to bottom
        for(int i=top; i<=bottom; i++){
            cin>>vec[i][right];
        } right--; }
        else if(direction==2){   //right to left
        for(int j=right; j>=left; j--){
            cin>>vec[bottom][j];
        }bottom--;}
        else if(direction==3){  //bottom to top
        for(int i=bottom; i>=top; i--){
            cin>>vec[i][left];
        } left++;}
    direction= (direction+1)%4;//because direction should be in the range of 0(including)to 4(leave it)i.e.0,1,2,3   
}
return vec;
}
int main(){
    int n,m; cin>>n>>m;
    vector<vector<int>> vec(n,vector<int>(m));
    vec=createspiral(n,m);
    cout<<"CREATE SPIRAL MATRIX"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<vec[i][j]<<" ";
        }cout<<endl;
    }
return 0;
}