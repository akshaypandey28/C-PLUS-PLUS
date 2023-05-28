#include<bits/stdc++.h>
using namespace std;
void countsort(vector<int> &v){
    int n=v.size(); int max=INT32_MIN;
    for(int i=0; i<n; i++){  // find the max element
        if(v[i]>max){
            max=v[i];
        }  }
    vector<int> frequency(max+1);
    for(int i=0; i<n; i++){ // create the freq array
        frequency[v[i]]++;   }
    for(int i=1; i<=max; i++){  // calculate the cumulative frequency
        frequency[i]=frequency[i]+frequency[i-1];    }
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--){ // calculate the sorted array
        ans[--frequency[v[i]]]=v[i];   }
    for(int i=0; i<n; i++){ // copy back the ans array to original array that is v
        v[i]=ans[i];   }      }
int main(){
    int n; cin>>n; vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];  }
    countsort(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";   }     return 0;  }