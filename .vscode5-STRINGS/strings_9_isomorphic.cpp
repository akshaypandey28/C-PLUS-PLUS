#include<bits/stdc++.h>
using namespace std;
bool isomorphic(string s1,string s2){
    vector<int> v1(128,-1);
    vector<int> v2(128,-1);
    if(s1.size()!=s2.size())  return false;    
    for(int i=0; i<s1.size(); i++){
        if(v1[s1[i]] != v2[s2[i]]){//checking if value of character at
            return false;//idx i match in both vectors
            break;   }
        v1[s1[i]]=i;//storing string position in vectors for charcters
        v2[s2[i]]=i;//at idx i
    }
    return true;    }
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(isomorphic(s1,s2)==1){
        cout<<"YES IT IS A ISOMORPHIC"<<endl;
    }
    else{
        cout<<"IT IS NOT A ISOMORPHIC"<<endl;
    }  return 0;  }