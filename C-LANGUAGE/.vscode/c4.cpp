#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d; cin>>a>>b>>c>>d;
    int maxi1=max(a,max(b,c));
    maxi1=max(maxi1,d);
    int maxi2=0;
    if(maxi1==a){
        maxi2=max(b,max(c,d));
    }
    else if(maxi1==b){
        maxi2=max(a,max(c,d));
    }
    else if(maxi1==c){
        maxi2=max(a,max(b,d));
    }
    else{
        maxi2=max(a,max(b,c));
    }

    
    cout<<(maxi1+maxi2)<<endl;
return 0;
}