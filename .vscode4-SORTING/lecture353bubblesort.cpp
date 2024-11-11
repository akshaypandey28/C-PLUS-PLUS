#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n-1; i++){
        bool flag=false;
        for(int j=0; j<n-1-i; j++){
            if(v[j+1]<v[j]){  // bool ka use loop se break krne ke liye hua hai taki jaise hi value true
             flag=true;       // ho break kr jaye
             swap(v[j+1],v[j]);    
            }    
        }
        if(!flag) break;    // flag true hua hai isliye print hua otherwise nhi hota
}   }
int main(){
    int n; cin>>n;
    vector<int> v(n); cout<<"ARRAY IS ";
    for(int i=0; i<n; i++) cin>>v[i];   
    bubblesort(v);
    cout<<"THE SORTED ARRAY IS ";
    for(int i=0; i<n; i++) cout<<v[i]<<" ";         
    return 0;   
}