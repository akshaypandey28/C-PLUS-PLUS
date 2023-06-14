#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int x=s[0];
    if(x>=65 && x<=90){
        cout<<s<<endl;
    }
    else{
        s[0]=x-32;
        cout<<s<<endl;
    }
return 0;
}