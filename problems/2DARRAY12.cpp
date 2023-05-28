/* Q2 - You are given a n*n square matrix, you need to rotate the matrix by 90 degrees in
clockwise direction. You need to do it in-place i.e. you are not allowed to make a new
matrix and allocate the elements to it. Make the changes in the same matrix and print it. */
#include<bits/stdc++.h>
using namespace std;
void rotatearray(vector<vector<int>> &v){
    int n=v.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        reverse(v[i].begin(),v[i].end());
    }
}
int main(){
    int n; cin>>n; vector<vector<int>> v(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    rotatearray(v);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
return 0;
}