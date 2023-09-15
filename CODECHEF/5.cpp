#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int t; cin>>t;
	//set<string> s;
    //vector<string> v;
	string a="";
    while(t--){
       // your code goes here
       string st; cin>>st;
       string c=st.substr(st.size()-2,2);
    reverse(c.begin(),c.end());
    int idx=0;
    size_t l=-1;
    size_t h=-1;
    size_t found=a.find(c);
    if( found!=std::string::npos){
    l=found;
    h=found+c.length();
    a.erase(l,h);
    }
   a=a+c;
  
     reverse(a.begin(),a.end());
    cout<<a<<endl;
return 0;
}
 //cout<<a<<endl;
    // for(auto itr=v.rbegin(); itr!=v.rend(); itr++){
    //        string b=*itr;
    //        string c=b.substr(b.size()-2,b.size()-1);
    //        //a.push_back(c);
    //        a=a+c;
       }