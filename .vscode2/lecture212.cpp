#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;   //L is for row and R is for column
int rectanglesum(vector<vector<int>> &v,int L1, int R1, int L2, int R2){
    int sum=0;   
    for(int i=0; i<v.size(); i++){
        for(int j=1; j<v[0].size();j++){
            v[i][j]=v[i][j]+ v[i][j-1];   // prefix sum array row-wise
        }  }  cout<<"PREFIX SUM MATRIX IS "<<endl;
        for(int i=0; i<v.size(); i++){
      for(int j=0; j<v[0].size(); j++){
        cout<<v[i][j]<<" ";
        }   cout<<endl;    }
    for(int i=L1; i<=L2; i++){
        if(R1!=0){
        sum= sum+v[i][R2]-v[i][R1-1];
        }  else{
            //v[i][R1-1] = 0
           sum= sum+v[i][R2]; 
        }   }
    return sum;    }
int main(){
    int n,m; cin>>n>>m;
    vector<vector<int>> vec(n,vector<int>(m));
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        cin>>vec[i][j];
            }     }
    int  L1,R1,L2,R2; cin>>L1>>R1>>L2>>R2;
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        cout<<vec[i][j]<<" ";
        }   cout<<endl;    }
    int sum=rectanglesum(vec,L1,R1,L2,R2);
    cout<<"RECTANGLE SUM = "<<sum<<endl;  return 0;   }