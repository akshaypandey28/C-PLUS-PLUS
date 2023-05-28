#include<bits/stdc++.h> 
using namespace std;
//find the first and last position of the given target element in the sorted array
int lowerBound(vector<int> &v,int target){ //first index >= target
    int lo=0; int hi=v.size()-1;   int ans=-1;
    while(lo<=hi){ //time O(logn) and space O(1)
        int mid=lo +(hi-lo)/2;
        if(v[mid]>=target){
            ans=mid;
            hi=mid-1;   } //discard right 
        else{
            lo=mid+1;   } //discard left
    }
    return ans;   }
int upperBound(vector<int> &v,int target){ //
    int lo=0; int hi=v.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo +(hi-lo)/2;
        if(v[mid]>target){
            ans=mid;
            hi=mid-1;    } //discard right
        else{
            lo=mid+1;   } //discard left
    }
    return ans;    }
int main(){
    int n; cin>>n;   vector<int> v; vector<int> result;
    for(int i=0; i<n; i++){
        int x; cin>>x;    v.push_back(x);   }
    int target ; cin>>target;
    int lb=lowerBound(v,target);
    if(v[lb]!=target){
        result.push_back(-1);
        result.push_back(-1); }
    else{
        int ub=upperBound(v,target);
        result.push_back(lb);
        result.push_back(ub-1); }
    cout<<result[0]<<"  "<<result[1]<<endl;    return 0;      }