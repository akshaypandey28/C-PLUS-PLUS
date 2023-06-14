/* Q5 - Given an integer array arr, return an array ans such that ans[i] is equal to the product of
all the elements of arr except arr[i]. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];   }
     
    //  vector<int> ans; // this solution is also true
    //  for(int i=0; i<n; i++){
    //     int multiply=1;
    //     for(int  j=0; j<n; j++){
    //         if(i!=j){
    //             multiply=multiply*array[j];
    //         }
    //     }
    //     ans.push_back(multiply);
    //  }
    //  for(auto ele: ans){
    //     cout<<ele<<" ";
    //  }
    int count_0=0;
    for(int i=0; i<n; i++){
        if(array[i]==0){
            count_0++;
        }
    }
    if(count_0>=2){
        cout<<"all elements of the array becomes equal to zero"<<endl;
    }
    else if(count_0==1){
        int multi=1;
         for(int i=0; i<n; i++){
         if(array[i]!=0){
            multi*=array[i];
              }
         }
     for(int i=0; i<n; i++){
        if(array[i]==0){
            array[i]=multi;
        }  
        else{
            array[i]=0;
        }
    }
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
        cout<<endl;
    }
    else{
        int multi=1;
         for(int i=0; i<n; i++){
            multi*=array[i]; 
        }
        for(int i=0; i<n; i++){
        cout<<multi/array[i]<<" ";  }
        cout<<endl;
    }
    return 0;
    }