/* Q6 - Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]] such
that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == x. Where k is an integer
given by the user.
Note: The solution set must not contain duplicate triplets and should not have 3 loops. */ 
//NOTE PART SHOULD BE CHECK ONCE AGAIN
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n ;vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];    }
    int sum=0; int k,x; cin>>k>>x;  // 0<= k <=n-1  this is k range and x is an random number
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
           if((v[i]+v[j]+v[k])==x){
                    sum=sum+1;
                }
        }
    }
    if(sum>0){
        cout<<"THE NO.OF TRIPLETS IS "<<sum<<endl; }
    else{
        cout<<"THERE IS NO TRIPLETS "<<endl;
    }
return 0;
}