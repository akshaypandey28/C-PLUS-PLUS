/* Q3. Given an array of intervals where arr[i] = [start, end], return the minimum number of intervals
you need to remove to make the rest of the intervals non-overlapping. */
#include<bits/stdc++.h>
using namespace std;
int merging(vector<vector<int>> &v){
    vector<vector<int>> ans;
    ans.push_back(v[0]);
    int j=0; int count=0;
    for(int i=1; i<v.size(); i++){
        if(ans[j][1]>v[i][0]){
            count++;
            ans[j][1]=max(ans[j][1],v[i][1]);
        }
        else{
            j++;
            ans.push_back(v[i]);
        }
    }
    return count;
}
int main(){
    int m,n; cin>>m>>n; 
    vector<vector<int>> v(m,vector<int>(n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    int intervals=merging(v);
cout<<"THE MINIMUM NUMBER OF INTERVALS IS "<<intervals<<endl;
return 0;
}-- //nahi smjh aya but code shi hai