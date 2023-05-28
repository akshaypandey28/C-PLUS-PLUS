#include<bits/stdc++.h>
using namespace std;
void bucketsort(float *array,int n){
    vector<vector<float>> bucket(n,vector<float>()); //step1
    for(int i=0; i<n; i++){
        int index=array[i]*n;
        bucket[index].push_back(array[i]);  } //step 2 inserting elements into bucket
    for(int i=0; i<n; i++){
        if(!bucket[i].empty());
        sort(bucket[i].begin(),bucket[i].end());  } //step 3sorting individual elements
    int k=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<bucket[i].size(); j++){
            array[k++]=bucket[i][j];  }  // step 4 combining elements from buckets
    }  }
int main(){
    int n; cin>>n;  float array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];    }
    bucketsort(array,n);
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";   }     return 0;  }