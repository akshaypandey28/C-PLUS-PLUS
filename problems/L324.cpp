#include<bits/stdc++.h>
using namespace std;
void f(int *array, int n, int idx){
    if(idx==n){
        return;  }
    if(array[idx]==array[idx+1]){
        array[idx]=!array[idx];
        f(array,n,idx+1);  }
    else{
        f(array,n,idx+1);  }
}
int main(){
    int n; cin>>n;  int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];  }
    f(array,n,0);
    for(int ele:array){
        cout<<ele;   }   return 0;   }