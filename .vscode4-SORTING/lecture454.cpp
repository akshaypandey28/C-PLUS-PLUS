//find index of target element in sorted rotated array
#include<bits/stdc++.h>
using namespace std; //time O( logn )
int binarySRA(vector<int> &input,int target){
    int lo=0,hi=input.size()-1;
    while(lo<=hi){
        int mid=lo +(hi-lo)/2;
        if(input[mid]==target){  return mid; }
        if(input[mid] >= input[lo]){  //mid ke left side se array sorted hai
            if(target >= input[lo] && target <= input[mid]){
                hi=mid-1;  }
            else{
                lo=mid+1;  }
        }
        else{  //(input[mid] < input[lo]) mid ke right side se array sorted hai
            if(target >= input[mid]  && target <= input[hi]){
                lo=mid+1; }
            else{
                hi=mid-1;  }
        }
    }
    return -1;
}
int main(){ 
    int n; cin>>n;     vector<int> v(n);    for(int i=0; i<n; i++){
        cin>>v[i];  }
    int target; cin>>target;
    cout<<"target element is present at index : "<<binarySRA(v,target)<<endl;
return 0;
}