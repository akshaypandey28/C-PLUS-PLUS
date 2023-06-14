#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    // if(a>b){
    //     cout<<0<<endl;
    // }
    //else{
        int count=0;
        while(a<=b){
            a*=3;
            b*=2;
            count++;
        }
        cout<<count<<endl;
    //}
return 0;
}