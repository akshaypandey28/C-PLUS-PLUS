/* Q1 - Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
two arrays into a single sorted array of size m+n. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n; cin>>m>>n;
    int arr1[m],arr2[n];
    for(int i=0; i<m; i++){
        cin>>arr1[i];  }
    for(int i=0; i<n; i++){
        cin>>arr2[i];  }
    int a=m+n;  int sort[a];
    int i=0,j=0;   int k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            sort[k++]=arr1[i++];  }
        else{
            sort[k++]=arr2[j++];  }
    }
    while(i<m){
        sort[k++]=arr1[i++];  }
    while(j<n){
        sort[k++]=arr2[j++];  }
    for(int ele:sort){
        cout<<ele<<" ";
    }cout<<endl;
return 0;
}