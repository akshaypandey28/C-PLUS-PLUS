#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int t; cin>>t;
	//set<string> s;
    vector<string> v;
	string a="";
    while(t--){
       // your code goes here
       string st; cin>>st;
    //    if(s.find(st)!=s.end()){
    //        s.erase(st);
    //    }
      // else{
           //s.insert(st);
      // }
       for(int i=0; i<v.size(); i++){
        if(v[i]==st){
            v.erase(v.begin()+i);
        }
        //
       }
       v.push_back(st);
       
    }
    // for(auto itr=s.rbegin(); itr!=s.rend(); itr++){
    //     cout<<*itr<<" ";
    // }
    // cout<<endl;
    // for(auto itr=s.begin(); itr!=s.end(); itr++){
    //     cout<<*itr<<" ";
    // }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(auto itr=v.rbegin(); itr!=v.rend(); itr++){
           string b=*itr;
           string c=b.substr(b.size()-2,b.size()-1);
           //a.push_back(c);
           a=a+c;
       }
    cout<<a<<endl;
return 0;
}