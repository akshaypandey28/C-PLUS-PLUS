#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        string a="";
        int count=0;
        int num=0;
        int i=0;
        while(a!=s){
            i++;
            while(a!=s and num<4){
                a=a+to_string(i);
                num++;
                count+=num;
            }
            if(a==s){
                break;
            }
            else{
                a="";
                num=0;
            }
        }
        cout<<count<<endl;
    }
return 0;
}