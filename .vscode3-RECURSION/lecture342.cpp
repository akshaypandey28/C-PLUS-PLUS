#include<bits/stdc++.h>//phone number problems with string digits
using namespace std;
void per(vector<string> &a,string &s,string str,int i,vector<string> &v){
    if(i==s.size()){
        a.push_back(str);
        return ;  }
    int digit=s[i]-'0';
    if(digit<=1){
        per(a,s,str,i+1,v); //no combinations only function call
        return ; }
    for(int j=0; j<v[digit].size(); j++){
        per(a,s,str+v[digit][j],i+1,v);
    }
    return ;   }
int main(){
    vector<string> v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string s; cin>>s;   vector<string> a;
    per(a,s,"",0,v);
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";   }  return 0;    }