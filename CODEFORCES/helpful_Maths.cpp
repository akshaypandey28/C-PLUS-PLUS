#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int o=0,t=0,th=0;
    for(int i=0; i<s.size(); i+=2){
        if(s[i]=='1'){
            o++;
        }
        else if(s[i]=='2'){
            t++;
        }
        else{
            th++;
        }
    }
    string a="";
    while(o>0){
        a+="1+";
        o--;
    }
    while(t>0){
        a+="2+";
        t--;
    }
    while(th>0){
        a+="3+";
        th--;
    }
    a.pop_back();
    cout<<a<<endl;
return 0;
}