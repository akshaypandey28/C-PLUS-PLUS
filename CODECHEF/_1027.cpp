#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    string str; cin>>str;
	    if(n%2==0){
	        for(int i=0; i<n; i+=2){
                swap(str[i],str[i+1]);
            }
            //cout<<str<<endl;
            for(int i=0; i<n; i++){
                //int ans=str[i];
                //char ch=122-ans+97;
                str[i]= char(122-int(str[i]) +97);
            }
            cout<<str<<endl;
	    }
        else{
            for(int i=0; i<n-1; i+=2){
                swap(str[i],str[i+1]);
            }
            //cout<<str<<endl;
            for(int i=0; i<n; i++){
                int ans=str[i];
                char ch=122-ans+97;
                str[i]=ch;
            }
            cout<<str<<endl;
	    }
	}
	return 0;
}
