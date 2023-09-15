#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll min_cost_to_break_Grid(int n,int m,vector<ll> &x,vector<ll> &y){
    sort(x.rbegin(),x.rend()); //x is vertical 
    sort(y.rbegin(),y.rend()); //y is horizontal
    int hz=1,  vr=1;
    int h=0,   v=0;
    ll ans=0;
    while(h < y.size() && v < x.size() ){
        if(x[v] > y[h]){
            ans+=x[v]*vr; //these are vertical cuts
            hz++;
            v++;
        }
        else{
            ans+=y[h]*hz; //these are horizontal cuts
            vr++;
            h++;
        }
    }
    while(h < y.size()){
        ans+=y[h]*hz; //these are horizontal cuts
            vr++;
            h++;
    }
    while(v < x.size()){
        ans+=x[v]*vr; //these are vertical cuts
            hz++;
            v++;
    }
    return ans;
}
int main(){
    int m,n; cin>>m>>n;  
    vector<ll> horizontal,vertical;
    for(int i=0; i<m-1; i++){//m for vertical
        int x; cin>>x;
        vertical.push_back(x);
    }
    for(int i=0; i<n-1; i++){//n for horizontal
        int x; cin>>x;
        horizontal.push_back(x);
    }
    int result=min_cost_to_break_Grid(n,m,vertical,horizontal);
    cout<<"cost to break into pieces is "<<result<<endl;
return 0;
}