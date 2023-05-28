/* Q5: Given an array. Find the first peak element in the array. A peak element is an element that is greater than
its just left and just right neighbor. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    vector<int> v;
    for(int i=1; i<n-1; i++){
        if(array[i]>array[i+1] && array[i]>array[i-1]){
           v.push_back(array[i]);
        }
    } 
    if(v.size()==0){
        cout<<"There are no elements present in this array"<<endl;
    }
    else{
        for(auto ele: v){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
return 0;
}