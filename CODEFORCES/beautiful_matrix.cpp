#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v(5,vector<int>(5));
    int r=0,c=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>v[i][j];
            if(v[i][j]==1){
                r=i;
                c=j;
            }
        }
    }
    cout<<abs(2-r)+abs(2-c)<<endl;
return 0;
}