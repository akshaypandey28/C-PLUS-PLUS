#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    
    int count=0;
    for(long long i=0; i<s.size(); i++){
        if(s[i]=='4' || s[i]=='7'){
            count++;
        }
    }
  //  cout<<count<<endl;
    string a="YES";
    string str=to_string(count);
  //  cout<<str<<endl;
    if(count==0){
        cout<<"NO"<<endl;
    }
    else{
        for(long long i=0; i<str.size(); i++){
            //cout<<str[i]<<endl;
        if(str[i]!='4' && str[i]!='7'){
            a="NO";
            break;
        }
    }
        cout<<a<<endl;
    }
return 0;
}