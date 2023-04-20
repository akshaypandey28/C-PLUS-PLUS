#include<bits/stdc++.h>
using namespace std;
void squares(vector<int> &v){
    vector<int>ans;
    vector<int>actualans;
    int j=0;
    int left_ptr=0; int right_ptr=v.size()-1;
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr]) < abs(v[right_ptr])){
         ans.push_back(v[right_ptr]*v[right_ptr]); 
         right_ptr--;  
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;  
        }
    } /*  for(int i=4; i>=0; i--){ actualans[j]=ans[i]; j++; } */ 
   reverse(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
   }
   cout<<endl;
}
int main(){
   vector<int>v;
   int n; cin>>n;
   for(int i=0; i<n; i++){
    int ele; cin>>ele;
    v.push_back(ele);
   }
   squares(v);
   
}