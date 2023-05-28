#include<bits/stdc++.h>
using namespace std;
bool makeStringsEqual(vector<string> &a){
    int n=a.size();
    map<char,int> count;
    for(int i=0; i<a.size(); i++){
        string s=a[i];
        for(int i=0; i<s.size(); i++){
            count[s[i]]++;   }
    }
    for(auto ele:count){
        if(ele.second<n){
            return false;   }
        else if(ele.second%n!=0){
            return  false;   }
        else{
            continue;   }
    }
    return true;   }
int main(){
    int n; cin>>n;   vector<string> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];  }
    bool result =makeStringsEqual(a);
    cout<<"strings can make equal or not in boolean "<<result<<endl;
return 0;  }