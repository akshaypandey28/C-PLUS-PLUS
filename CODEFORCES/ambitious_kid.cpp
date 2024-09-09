#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v(n);
    int mini=INT_MAX;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        mini=min(abs(v[i]),mini);
    }
    cout<<mini<<endl;
return 0;
}