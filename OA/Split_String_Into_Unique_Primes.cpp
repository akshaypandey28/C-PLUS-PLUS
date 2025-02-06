#include<iostream>
using namespace std;
const int maxLimit = 1000;
int prime[maxLimit + 1] = {0}; // Initialize all to 0

void seive(){
    for (int i = 2; i <= maxLimit; i++) prime[i] = 1; // Mark all numbers >= 2 as potentially prime
    
    for(int i=2; i*i<=maxLimit; i++){
        if(prime[i]){
            for(int j=i*i; j<=maxLimit; j+=i) prime[j]=0;
        }
    }
}
void f(string &s,int i,int &count){
    if(i==s.size()){
        count++;
        return ;
    }
    if(s[i]=='0') return ;
    string temp="";
    for(int j=i; j<s.size(); j++){
        temp.push_back(s[j]);
        int val=stoi(temp);
        if(val<2) continue;
        if(val>1000) break;

        if(prime[val]) f(s,j+1,count);
        
    }
}
int main(){
    seive();
    string s; cin>>s;
    int count=0;
    f(s,0,count);
    cout<<count<<endl;
return 0;
}

