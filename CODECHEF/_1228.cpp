#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        vector<int> a(11);
        for(int i=0; i<11; i++){
            cin>>a[i];
        }
        int k; cin>>k;
        sort(a.begin(),a.end());
        int maxi=a[10];
        // cout<<maxi<<endl;
        vector<int> freq(maxi+1,0);
        for(int i=0; i<11; i++){
            freq[a[i]]++;
        }
        // for(int i=0; i<freq.size(); i++){
        //     cout<<freq[i]<<" ";
        // }
        // cout<<endl;
        vector<int> v;
        for(int i=10; i>=11-k; i--){
            v.push_back(a[i]);
        }
        // for(int i=0; i<v.size(); i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        int count=0;
        for(int i=0; i<v.size(); i++){
            int x=freq[v[i]];
            if(x>2){

                count+=x*(x-1)/2;
                freq[v[i]]=0;
            }
        }
        if(count==0){
            cout<<1<<endl;
        }
        else{
            cout<<count<<endl;
        }
        
        
    }
return 0;
}