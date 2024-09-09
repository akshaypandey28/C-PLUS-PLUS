#include<bits/stdc++.h>
using namespace std;
int solution(vector<vector<int>> lamps){
    unordered_map<int,int> m;
    for(int i=0; i<lamps.size(); i++){
        int a=lamps[i][0];
        int r=lamps[i][1];
        for(int j=a-r; j<=a+r; j++) m[j]++;
        
    }
    int check=0;
    int ans=-1;
    for(auto ele:m){
        if(ele.second>check) {
            check=ele.second;
            ans=ele.first;
        }
        if(ele.second==check) ans=min(ans,ele.first);
    }
    return ans;
}
int main(){
    // int n; cin>>n;
    // vector<vector<int>> l(n,vector<int> (2));
    // for(int i=0; i<n; i++){
    //     cin>>l[i][0];
    //     cin>>l[i][1];
    // }
    vector<vector<int>> lamps = {
    {0, 5},   // Lamp covers range [-5, 5]
    {3, 3},   // Lamp covers range [0, 6]
    {6, 2},   // Lamp covers range [4, 8]
    {-4, 2},  // Lamp covers range [-6, -2]
    {2, 7},   // Lamp covers range [-5, 9]
    {10, 5},  // Lamp covers range [5, 15]
    {7, 4}    // Lamp covers range [3, 11]
};
    cout<<solution(lamps)<<endl;
return 0;
}