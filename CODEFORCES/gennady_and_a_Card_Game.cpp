#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    vector<string> a(5);
    int i=0;
    for(i; i<5; i++){
        cin>>a[i];
        if(s[0]==a[i][0] || s[1]==a[i][1]){
            cout<<"YES"<<endl;
            break;
        }
    }
    if(i==5){cout<<"NO"<<endl;}

return 0;
}