#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(n);
    vector<int> b;
    //cin>>a[0];
    int count=1;
    for(int i=0; i<n; i++){
        cin>>a[i];
        // if(a[i]>a[i-1]){
        //     count++;
        // }
        // else{
        //     b.push_back(count);
        //     cout<<count<<endl;
        //     count=1;
        // }
    }  
    for(int i=1; i<n; i++){
        if(a[i]>a[i-1]){
            count++;
            // cout<<"&&&&"<<endl;
            // cout<<count<<endl;
        }
        else{
            b.push_back(count);
        //    cout<<count<<endl;
            count=1;
        }
    }
    b.push_back(count);
    sort(b.begin(),b.end());
    // for(int i=0; i<b.size(); i++){
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
    cout<<b[b.size()-1]<<endl; 
return 0;
}