#include<bits/stdc++.h>
using namespace std;
string odd(int m){
    string s="";
    for(int i=1; i<=m; i++){
        s=s+'#';
    }
    return s;
}
string for_2(int m){
    string s="";
    for(int i=1; i<m; i++){
        s=s+'.';
    }
    return s;
}
string for_4(int m){
    string s="";
    for(int i=1; i<m; i++){
        s=s+'.';
    }
    return s;
}
int main(){
    int n,m;  cin>>n>>m;
    for(int i=1; i<=n; i++){
            if(i%2!=0){
                cout<<odd(m);  }
            else{
              if(i%4!=0){
                cout<<for_2(m)<<"#";  }
              else{
                cout<<"#"<<for_4(m);
              }
            }
        cout<<endl;
    }
return 0;
}