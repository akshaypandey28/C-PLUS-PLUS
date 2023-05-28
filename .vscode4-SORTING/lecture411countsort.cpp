#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[]={5,2,3,2,1};
    int n=sizeof(array)/sizeof(array[0]);
    int max=array[0];
    for(int i=1; i<n ;i++){
        if(array[i]>max){
            max=array[i];  }  }
    int m=max+1;   int frequency[m];
    for(int i=0; i<n; i++){
         frequency[array[i]]++;   }
    for(int i=1; i<m; i++){
        frequency[i]=frequency[i]+frequency[i-1];   }
    for(int ele:frequency){
        cout<<ele<<" ";     }
    cout<<endl;
return 0;  }