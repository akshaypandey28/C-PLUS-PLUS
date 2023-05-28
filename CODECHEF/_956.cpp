#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    string str; cin>>str;
	    int count=0;
	    //string s="sad";
	    for(int i=0;  i<str.size(); i++){
	        if(str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='o'  || str[i]=='u'){
	            count++;
	            if(count==3){
	                cout<<"happy"<<endl;
	                break;
	            }
	            
	        }
	        else{
	            count=0;
	        }
	    }
	    if(count!=3){
	        cout<<"sad"<<endl;
	    }
	}
	return 0;
}
