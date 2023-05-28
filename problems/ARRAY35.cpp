/* Q5 - Given an integer array arr, return an array ans such that ans[i] is equal to the product of
all the elements of arr except arr[i]. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];   }
     
     vector<int> ans;
     for(int i=0; i<n; i++){
        int multiply=1;
        for(int  j=0; j<n; j++){
            if(i!=j){
                multiply=multiply*array[j];
            }
        }
        ans.push_back(multiply);
     }
     for(auto ele: ans){
        cout<<ele<<" ";
     }
    
return 0;
}