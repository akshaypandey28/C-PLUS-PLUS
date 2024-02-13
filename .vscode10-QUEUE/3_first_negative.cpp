#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    queue<int> qu; //for storing the indexes of the negative number
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]<0) qu.push(i);
    }
    vector<int> ans;
    int i=0;
    while(i<=n-k){ //i can maximum reach upto n-k
        while(qu.empty()!=1 and qu.front() < i) qu.pop(); //
        if(qu.front() >= i+k || qu.size()==0) ans.push_back(0); 
        else ans.push_back(v[qu.front()]);
        i++;
    }
    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
    cout<<endl;
return 0;
}