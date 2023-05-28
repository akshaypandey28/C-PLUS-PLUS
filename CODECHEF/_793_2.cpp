#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(auto ele: v){
        cout<<ele<<" ";
    }
    cout<<endl;
    if(v[0]==v[1]){
        cout<<"true"<<endl;
    }
return 0;
}