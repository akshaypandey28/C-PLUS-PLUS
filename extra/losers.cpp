#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int k; cin>>k;
    vector<int> v(n+1);
    v[0]=0;
    for(int i=1; i<n+1; i++){
        cin>>v[i];
    }
    int s=v.size();
    vector<int> d(n+1,0);
    d[1]=1;
    int count=0;
    // int x=(count*k)%(n+1) +1;
    // d[v.size()-x]++;
    // cout<<"x is "<<x<<endl;
    // while(d[x]<=1){
    //     count++;
    //     if((count*k)==(n+1)){
    //         x=v.size()-x+1;
    //         d[v.size()-x]++;
    //     }
    //     else {
    //         x=(count*k)%(n+1); 
    //         d[v.size()-x]++;
    //     }
    // }
    //cout<<"d is "<<endl;
    // for(int i=1; i<d.size(); i++){
    //     cout<<d[i]<<" ";
    // }
    // cout<<endl;
    int x=1;
    while(d[x]!=2){
        count++;
        if((count*k)==s){
            int a=(x+1)%s;
            d[a]++;
        }
        else{
            if(count==1){
                x=(count*k)%s;
                x=x+1;
            }
            else{
                x=(count*k)%s;
            }
            d[s-x]++;
        }
    }
    for(int i=0; i<d.size(); i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    vector<int> ans;
    for(int i=1; i<d.size(); i++){
        if(d[i]==0){
            ans.push_back(i);
        }
    }
    for(auto ele:ans){
        cout<<ele<<" ";
    }
return 0;
}