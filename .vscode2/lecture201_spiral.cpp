#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void spiral(vector<vector<int>> &v){
    int left=0;
    int right=v[0].size()-1;
    int top=0; 
    int bottom=v.size()-1;
    /* left =0, right =3, top =0, bottom =4 */
    int direction=0;
    while( left<=right || top<=bottom){   // there must be a condition for while loop always
        if(direction==0){ //left to right
        for(int j=left; j<=right; j++){
            cout<<v[top][j]<<" ";
        }    top++;}
        else if(direction==1){ // top to bottom
        for(int i=top; i<=bottom; i++){
            cout<<v[i][right]<<" ";
        } right--; }
        else if(direction==2){   //right to left
        for(int j=right; j>=left; j--){
            cout<<v[bottom][j]<<" ";
        }bottom--;}
        else if(direction==3){  //bottom to top
        for(int i=bottom; i>=top; i--){
            cout<<v[i][left]<<" ";
        } left++;}
    direction= (direction+1)%4;//because direction should be in the range of 0(including)to 4(leave it)i.e.0,1,2,3   

}
}
int main(){
    int n,m; cin>>n>>m;
    vector<vector<int>> vec(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>vec[i][j];            
        }
    }
    spiral(vec);

return 0;
}