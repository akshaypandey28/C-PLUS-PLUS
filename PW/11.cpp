#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8,m=8;// cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n/2-i+1; j++){
            if((i==1 || i<=n/2) && j<=m/2) {
                cout<<"*";
            }
            }
        for(int j=1; j<=i-n/2; j++){
            if((i>=n/2 || i==n) && j<=m/2) {
                cout<<"*";
            }
        }
        
        
        
        cout<<endl;
    }
return 0;
}