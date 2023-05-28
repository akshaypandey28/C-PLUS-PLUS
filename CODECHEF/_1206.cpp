#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    string s; cin>>s;
	    string a,b;
	    a.push_back(s[s.size()-1]);
	    for(int i=0; i<s.size()-1; i++){
	        a.push_back(s[i]);
	    }
	    
	    for(int i=1; i<s.size(); i++){
	        b.push_back(s[i]);
	    }
	    b.push_back(s[0]);
        cout<<a<<"  "<<b<<endl;
	    if(a==b){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
