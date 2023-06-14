#include<bits/stdc++.h>
using namespace std;
int prefixSum_0(vector<int> &a){
    unordered_map<int,int> m;
    int prefixSum=0;  int maxLen=0;
    for(int i=0; i<a.size(); i++){
        prefixSum+=a[i];
        if(prefixSum==0){
            maxLen++;} //check condition such that let a array with
            // all elements equal to zero
        if(m.find(prefixSum)!=m.end()){
            maxLen=max(maxLen,i-m[prefixSum]);   }
        else{
            m[prefixSum]=i; }
    }
    return maxLen;  }
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int result=prefixSum_0(a);
    cout<<"max length with sum equal to zero(0) "<<result<<endl; return 0;
}