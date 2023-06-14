#include<bits/stdc++.h>//given string print all subsequences of it
using namespace std;
void subsequences(vector<string> &a,string &s,string b,int i){
    if(i==s.size()){
        a.push_back(b);
        return ;
    }
    //pick condition 
    subsequences(a,s,b+s[i],i+1);
    //not pick condition
    subsequences(a,s,b,i+1);
}
int main(){
    string s; cin>>s;
    vector<string> a;
    subsequences(a,s,"",0);
    //sort(a.begin(),a.end());
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
return 0;
}