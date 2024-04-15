#include<bits/stdc++.h>
using namespace std;
vector<int> resultArray(vector<int>& nums) {
        vector<int> a,b;
        a.push_back(nums[0]);
        b.push_back(nums[1]);
        for(int i=2; i<nums.size(); i++){
            if(a[a.size()-1]>b[b.size()-1]) a.push_back(nums[i]);
            else b.push_back(nums[i]);
        }
        vector<int> result;
        for(int i=0; i<a.size(); i++) result.push_back(a[i]);
        for(int i=0; i<b.size(); i++) result.push_back(b[i]);
        return result;
        
    }
int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<int> result=resultArray(v);
    for(int i=0; i<result.size(); i++) cout<<result[i]<<" ";
return 0;
}