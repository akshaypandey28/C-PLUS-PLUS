//find minimum in sorted rotated array
#include<bits/stdc++.h>
using namespace std;
int index(vector<int>&input){//i can also return index of minimum element in SRA
    if(input.size()==1){
        return input[0];
    }
    int lo=0, hi=input.size()-1;
    if(input[lo] < input[hi]){ // check condition whether array is sorted
       return input[lo];       //or not that is sorted array not rotated
    } 
    while(lo<=hi){
        int mid=lo+ (hi-lo)/2;
        if(input[mid] > input[mid+1]){ return input[mid+1]; }
//line 14 me mid SRA ka maximum element represent kr rha hai that 
//means uske aage wala element sbse small hoga
        if(input[mid] < input[mid-1]){ return input[mid];   }
//line 17 me mid SRA ka minimum element represent kr rha hai that 
//means whi element sbse small hoga
        if(input[mid] > input[lo]){
            lo=mid +1;   }
        else{ //(input[mid] < input[lo] )
            hi=mid-1; }
    }
    return -1;   }
int main(){
    int n; cin>>n;     vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];  }
    cout<<"minimum element is "<<index(v)<<endl;   return 0;    }