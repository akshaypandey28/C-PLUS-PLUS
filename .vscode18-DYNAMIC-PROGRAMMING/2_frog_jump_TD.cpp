#include<bits/stdc++.h> //TD is used here
using namespace std;
vector<int> dp;
int f(vector<int> &height,int i,int k){
    if(i==height.size()-1) return 0; //because when the frog reaches at last step that is last index
        //of the vector then a jump must be taken but that jump at the same will be taken that's 
        //why it return 0

    if(dp[i]!=-1) return dp[i];
    int ans=INT_MAX;
    for(int j=1; j<=k; j++){ //range of j is [1,k] 
        if(i+j >= height.size()) break;
        
        ans=min(ans, abs(height[i]-height[i+j])+ f(height,i+j,k));
        //same method is applied if somehow recursion calculates the some recursive function call 
        //then after that particular result can be attached with the absolute value and for making 
        //more efficient dp is used such that it stores the value of every recursive function call 
    }
    return dp[i]=ans;
}
int main(){
    dp.clear();
    dp.resize(100005,-1);
    int n,k; cin>>n>>k;
    vector<int> v(n,0);
    for(int i=0; i<n; i++){
        cin>>v[i];    }
    int result =f(v,0,k);
    cout<<"The minimum cost of jump is "<<result <<endl;
return 0;  }