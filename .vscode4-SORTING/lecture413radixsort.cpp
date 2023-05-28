#include<bits/stdc++.h>
using namespace std;
void countsort(vector<int> &v,int pos){
    int n=v.size();
    vector<int> frequency(10,0);
    for(int i=0; i<n; i++){ // create the freq array
        frequency[(v[i]/pos)%10]++;    }
    for(int i=1; i<10; i++){ // calculate the cumulative frequency
        frequency[i]=frequency[i]+frequency[i-1];    } 
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--){ // calculate the sorted array
       ans[--frequency[(v[i]/pos)%10]] = v[i];  }
    for(int i=0; i<n; i++){ // copy back the ans array to original array that is v
        v[i]=ans[i];   }     }
void radixsort(vector<int> &v){
    int n=v.size(); int maxi=INT32_MIN;
    for(auto ele:v){  // find the max element
        maxi= max(maxi,ele);    } 
    for(int pos=1; (maxi/pos)>0; pos*=10){
        countsort(v,pos);   }     }
int main(){
    int n; cin>>n; vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];  }
    radixsort(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";   }     return 0;   }