/* class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
    }
}; */
#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n;  cin>>n; 
    int array[n];
    int target; cin>>target;
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    vector<int> b;
    for(int i=0; i<n-1; i++){
       for(int j=i+1; j<n; j++){
        if(array[i]+array[j]==target){
          b.push_back(i);
          b.push_back(j);
        }
    }
    }
    for(auto k:b){
        cout<<k<<" ";
    }
}