#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int array[n]; cout<<"ARRAY IS ";
    for(int i=0; i<n; i++){
        cin>>array[i];     }
    for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1-i; j++){        //also this is correct for(int i=0; i<n; i++){
        if(array[j+1]<array[j]){       //     if(array[j+1]<array[j]){
            swap(array[j+1],array[j]);   //     swap(array[j+1],array[j]);    }
        }   }   }
    cout<<"SORTED ARRAY IS ";
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";    }
return 0;    }