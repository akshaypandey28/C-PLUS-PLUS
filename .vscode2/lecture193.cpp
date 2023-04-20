#include<iostream>
#include<vector>
#include<bits/stdc++.h>   // used for reversing
using namespace std;
void rotatearray(vector<vector<int>> &vec){
    int n=vec.size();
    //transpose and then reverse every row
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(vec[i][j],vec[j][i]);    // basically this is transpose of the matrix for lower diagonal elements
        }
    }
    for(int i=0; i<n; i++){
        reverse(vec[i].begin(),vec[i].end());  //reverse every row
    }
    return;
}
int main(){
    int n; cin>>n;
    vector<vector<int>> vec(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            
            cin>>vec[i][j];
        }  }
    rotatearray(vec);
    cout<<"REVERSE ARRAY IS THAT IS ROTATION BY 90 DEGREE"<<endl;
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<n; j++){
            cout<<vec[i][j]<<" ";
        }cout<<endl;  }  return 0;  }