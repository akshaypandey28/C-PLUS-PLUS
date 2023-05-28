#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> &input,int target){
    //define search space
    int lo=0; //start of the search space
    int hi=input.size()-1; //end of the search space
    while(lo<=hi){
    //calculate mid point for the search space
    int mid=(lo+hi)/2;
    if(input[mid]==target)  {
        return mid;          }
    else{ //if target not found then 
         if(input[mid] < target){
//then we have the discard the elements which are behind the mid value
            lo=mid+1;   }
        else{ // input[mid] > target
            //discard the elements which are after the mid value
            hi=mid-1;   }
        }
}
    return -1;    }
int main(){
    vector<int> input {2,4,5,7,15,24,45,50};  
    int target=15;
    for(auto i:input){
        cout<<i<<" ";    }
    cout<<endl;
    cout<<binarysearch(input,target)<<endl;   return 0;    }