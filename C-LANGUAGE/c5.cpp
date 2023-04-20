#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q; cin>>n>>q;
    vector<int> v(n);
    for(int i=0; i<n; i++){
       cin>>v[i];
    }
    for(int j=1; j<=q; j++){
    int x,y; cin>>x>>y;
        int answer=0;
        for(int z=x-1; z<y; z++){
            answer=answer+v[z];
        }
        cout<<answer<<endl;
    }
return 0;
}