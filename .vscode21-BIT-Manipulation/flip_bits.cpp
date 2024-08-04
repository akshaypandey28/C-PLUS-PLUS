#include<bits/stdc++.h>
using namespace std;
int main(){
    int m; cin>>m;
    int n=m;
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);

    cout<<"flip bits of m "<<(m^n)<<endl;
return 0;
}