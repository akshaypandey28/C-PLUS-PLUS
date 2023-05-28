/* Q1 - Given an integer array and two integers L and R. Find the sum of elements between the
index L and index R.
Note: Both L and R inclusive. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    for(int i=1; i<n; i++){
        array[i]=array[i]+array[i-1];
    }
    int l,r; cin>>l>>r;
    int sum=array[r]-array[l-1];
    cout<<"THE SUM IS "<<sum<<endl;
return 0;
}