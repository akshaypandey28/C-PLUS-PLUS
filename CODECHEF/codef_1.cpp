#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int count1=0;
        int count2=0;
        int count3=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='<' && s[i+1]=='>'){
                int j=i+2;
                while(s[j]=='<' && s[j+1]=='>'){
                    j+=2;
                }
                i=j-1;
                count1++;
            }
            else if(s[i]=='<'){
                count2++;
            }
            else if(s[i]=='>'){
                count3++;
            }
        }
        if(count2==n){
            cout<<count2+1<<endl;
        }
        else if(count3==n){
            cout<<count3+1<<endl;
        }
        else if(count1==0){
            cout<<count2+count3-1<<endl;
        }
        else{
            cout<<count1+count2+count3<<endl;
        }
    }
return 0;
}