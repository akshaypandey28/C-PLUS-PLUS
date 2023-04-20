#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v(5);
    for(int i=0; i<v.size(); i++){
        int col; cin>>col;
        v[i]=vector<int>(col);
    }
    for(int i=0;i< v.size();i++){
        for(int j=0; j<v[i].size(); j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}