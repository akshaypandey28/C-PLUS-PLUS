#include<bits/stdc++.h>
using namespace std;
int main(){
	//int t; cin>>t;
   // while(t--){
        string str; cin>>str;
        int i=0; 
        if(str[i]=='9'){
            i++;
        }
        //cout<<'9'-'5';
        for(int j=i; j<str.size(); j++){
            //char ch=str[i];
            int x=str[j]-'0';
            if(x>=5){
                   // cout<<'9'-ch;
                   str[j]='9'-char(x);

            }
        }
        cout<<str<<endl;
        
        
    //}
return 0;
}