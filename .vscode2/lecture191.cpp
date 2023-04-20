#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int maximum0nesRow(vector<vector<int>> &v){
    int max0nes =INT32_MIN;
    int max0nesRow =-1;
    int columns = v[0].size();
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            if(v[i][j]==1){
                int numberof0nes = columns-j;
                if(numberof0nes>max0nes){
                    max0nes=numberof0nes;
                    max0nesRow = i;
                } break;
            }
        }
    }
    return max0nesRow;
}
int main(){
    int n,m; cin>>n>>m;
    vector<vector<int>> vec(n,vector<int> (m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>vec[i][j];
        }
    }
    int result=maximum0nesRow(vec);
    cout<<"the row number which has max number of row is "<<result<<endl;   return 0;   }