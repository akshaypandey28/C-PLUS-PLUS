#include<bits/stdc++.h>
using namespace std;
void f(int *array,int n,int idx,int targetvalue){
    if(idx==n){    return;  }
    if(targetvalue==array[idx]){
        cout<<idx<<" ";
        f(array,n,idx+1,targetvalue);  }
    else{
        f(array,n,idx+1,targetvalue);   }
}
int main(){
    int n; cin>>n; int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];  }
    int targetvalue; cin>>targetvalue;
    cout<<"THE INDEX IS ";
    f(array,n,0,targetvalue);    return 0;  }