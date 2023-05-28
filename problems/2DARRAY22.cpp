/* Q2. Given an array of intervals where intervals[i] = [start, end], merge all overlapping intervals, and
create a function which returns a vector of the non-overlapping intervals that cover all the
intervals in the input. */
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> merging(vector<vector<int>> &v){
    vector<vector<int>> ans;
    ans.push_back(v[0]);
    int j=0;
    for(int i=1; i<v.size(); i++){
        if(ans[j][1]>=v[i][0]){
            ans[j][1]=max(ans[j][1],v[i][1]);
        }
        else{
            j++;
            ans.push_back(v[i]);
        }
    }
    return ans;
}
int main(){
    int m,n; cin>>m>>n; 
    vector<vector<int>> v(m,vector<int>(n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    vector<vector<int>> ans;
    ans=merging(v);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i][0]<<"  "<<ans[i][1]<<endl;
    }
return 0;
}--  //nahi smjh aya but code shi hai