#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t; cin>>t;
	while(t--){
		//long long n; cin>>n;
		string s; cin>>s;
        vector<int> a;
		for(int i=0; i<5; i++){
            //int j=s[i]-'0';
            //if()
            if(isdigit(s[i])){
                int j=s[i]-'0';
                a.push_back(j);
            }
        }
        int b=(a[0]*10)+(a[1]);
        int c=(a[2]*10)+(a[3]);
        if((b>=1 && b<=12) && c>12){
            cout<<"MM/DD/YYYY"<<endl;
        }
        else if( (c>=1 && c<=12) && b>12){
            cout<<"DD/MM/YYYY"<<endl;
        }
        else{
            cout<<"BOTH"<<endl;
        }
	}
	
return 0;
}