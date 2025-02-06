#include<bits/stdc++.h>
using namespace std;
void countsort(vector<int> &v,int pos){
    int n=v.size();
    vector<int> frequency(10,0);
    for(int i=0; i<n; i++) frequency[(v[i]/pos)%10]++; // create the freq array
    
    for(int i=1; i<10; i++) frequency[i]=frequency[i]+frequency[i-1]; // calculate the cumulative frequency
            
    vector<int> ans(n);

    for(int i=n-1; i>=0; i--) ans[--frequency[(v[i]/pos)%10]] = v[i]; // calculate the sorted array
        
    for(int i=0; i<n; i++) v[i]=ans[i]; // copy back the ans array to original array that is v

}
void radixsort(vector<int> &v){
    int n=v.size(); 
    int maxi=INT32_MIN;
    for(auto ele:v) maxi= max(maxi,ele);// find the max element
        
    for(int pos=1; (maxi/pos)>0; pos*=10) countsort(v,pos); 
}
int main(){
    int n; cin>>n; 
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    radixsort(v);
    for(int i=0; i<n; i++) cout<<v[i]<<" ";  

    return 0;   
}