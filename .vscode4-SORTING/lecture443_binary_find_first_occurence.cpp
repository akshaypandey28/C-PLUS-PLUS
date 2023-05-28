#include<bits/stdc++.h>
using namespace std;
int firstOccurence(vector<int> &input,int target){
    int lo=0; //Time : O(logn)
    int hi=input.size()-1; // Space : O(1)
    int ans=-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(input[mid]==target)  {
        ans=mid;
        hi=mid-1;          }
        else if(input[mid]> target){
            hi=mid-1;   }
        else{
            lo=mid+1;   }
    }
    return ans;
}
int main(){
    int n; cin>>n;    vector<int> input;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        input.push_back(x);  }
    int target; cin>>target;
cout<<"the first occurence of "<<target<<" is "<<firstOccurence(input,target)<<endl;
return 0;
}
