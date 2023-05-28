#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(v[j+1]<v[j]){
                swap(v[j+1],v[j]);    }    }   }   }
int main(){
    int n; cin>>n;
    vector<int> v(n); cout<<"ARRAY IS ";
    for(int i=0; i<n; i++){
        cin>>v[i];   }
    bubblesort(v);
    cout<<"THE SORTED ARRAY IS ";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";    }     return 0;   }