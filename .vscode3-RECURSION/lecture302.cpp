#include<bits/stdc++.h>
using namespace std;
string f(string &s,int idx, int n){
    if(idx==n){  //base case
    return "";  }
    string curr ="";
    curr+=s[idx];
    return ((s[idx]=='a')? "": curr) + f(s,idx+1,n);
}
int main(){
    string s="abcax"; int idx=0;
    int n=5;
    cout<<f(s,idx,n);
return 0;
}