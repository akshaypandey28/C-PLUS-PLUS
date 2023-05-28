//find the first and last position of the given target element in 
//the sorted array (brute force approach)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin>>n; vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];   }
    int target; cin>>target;
    vector<int> result;
    for(int i=0; i<n; i++){
        if(v[i]==target){
            result.push_back(i); 
            break; }
    }
    for(int i=n-1; i>=0; i--){
        if(v[i]==target){
            result.push_back(i);
        break; }
    } 
    sort(result.begin(),result.end());
    for(auto ele: result){
        cout<<ele<<" ";
    } 
return 0;
}