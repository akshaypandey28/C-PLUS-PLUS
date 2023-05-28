#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	//while(t--){
	    long long count =0;
	    string str;  
        getline(cin, str);
	    /* for(long long i=0; i<str.size(); i++){
	        if(str[i]=='A' ||str[i]=='D' || str[i]=='O' || str[i]=='P' ||str[i]=='R' ||str[i]=='B'){
	            if(str[i]=='B'){
	                count+=2;
	            }
	            else{
	                count++;
	            }
	        }
	    } */
	    cout<<count<<endl;
	//}
	return 0;
}
