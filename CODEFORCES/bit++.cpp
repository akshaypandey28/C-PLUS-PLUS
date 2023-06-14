#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    int count=0;
    while(t--){
        string s; cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='+'){
                count++;
                break;
            }
            if(s[i]=='-'){
                count--;
                break;
            }
        }
       
    }
     cout<<count<<endl;
return 0;
}