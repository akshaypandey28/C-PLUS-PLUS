#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int rectanglesum(vector<vector<int>> &v,int L1, int R1, int L2, int R2){
    int sum=0;
    for(int i=L1; i<=L2; i++){
        for(int j=R1; j<=R2; j++){
            sum = sum+ v[i][j];
        }    }
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
    cout<<"RECTANGLE SUM = "<<sum<<endl;   return 0;  }