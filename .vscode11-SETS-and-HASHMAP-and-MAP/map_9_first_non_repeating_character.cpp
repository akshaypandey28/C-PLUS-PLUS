#include<bits/stdc++.h> //leetcode 387 self
using namespace std;
int main(){
    string s; cin>>s;
    unordered_map<char,int> m;
    for(int i=0; i<s.size(); i++){
        m[s[i]]++;
    }
    int index=-1;
    for(int i=0; i<s.size(); i++){
        if(m[s[i]]==1){
            index=i;
            break;
        }
    }
    cout<<"the index is "<<index<<endl;
return 0;
}