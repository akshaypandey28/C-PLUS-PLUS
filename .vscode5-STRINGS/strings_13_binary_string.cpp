#include<bits/stdc++.h>
using namespace std;
int longestones(string str ,int k){
    int start=0;   
    int end=0;
    int max_length=0;
    int zero_count=0;
    for(; end<str.length(); end++){
        if(str[end]=='0'){
        zero_count++;   }
        while(zero_count>k){
            if(str[start]=='0'){
             zero_count--;
             start++; }  //contracting our window 
        }
//we reached here only when zero_count<=k
        max_length=max(max_length,end-start+1);
    }
    return max_length;     }
int main(){
    string str; cout<<"ENTER BINARY STRING "; cin>>str;
    int k; cout<<"ENTER MAX FLIPS "; cin>>k;
    cout<<longestones(str,k)<<endl;     return 0;   }