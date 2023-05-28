/* Q5 - Given a vector arr[] sorted in increasing order of n size and an integer x, find the number
of unique pairs that exist in the array whose absolute sum is exactly x. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];    }
    int sum=0;
    int x; cin>>x;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(abs(array[i]+array[j])==x){
               sum=sum+1;
            }
        }
    }
    if(sum>0){
        cout<<"THE NO.OF PAIRS IS "<<sum<<endl; }
    else{
        cout<<"THERE IS NO PAIRS "<<endl;
    }
    
return 0;
}