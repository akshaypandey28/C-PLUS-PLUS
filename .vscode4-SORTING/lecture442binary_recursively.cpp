#include<bits/stdc++.h>
using namespace std;
 int binarysearch(vector<int> &input,int target,int lo,int hi){
    /* time complexity is O(logn)
    space complexity is O(logn) 
     */
    if(lo>hi){
        return -1;     }
    int mid=(lo+hi)/2;  //effectively mid calculating is mid= lo + (hi-lo)/2; 
    if(input[mid]==target){ // modified mid to tackle overflow
        return mid;
    }
    if(input[mid]<target){ 
        binarysearch(input,target,mid+1,hi);
        //return binarysearch(input,target,mid+1,hi);
    }
    else{
        binarysearch(input,target,lo,mid-1);
        //return binarysearch(input,target,lo,mid-1);
    }
 }
int main(){
   vector<int> input {2,4,5,7,15,24,45,50};  
    int target=20;
    for(auto i:input){
        cout<<i<<" ";    }
    cout<<endl;
    cout<<binarysearch(input,target,0,8)<<endl;   return 0;    }
