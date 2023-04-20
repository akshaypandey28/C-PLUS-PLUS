#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,q; cin>>n>>q;
    vector<double> v(n);
    for(int i=0; i<n; i++){
       cin>>v[i];
    }
    for(double j=1; j<=q; j++){
    double x,y; cin>>x>>y;
        double answer=0;
        for(double z=x-1; z<y; z++){
            answer=answer+v[z];
        }
        cout<<answer<<endl;
    }
return 0;
}