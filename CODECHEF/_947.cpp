#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int a,b,c; cin>>a>>b>>c;
	    string str;
	    if( a<b && a<c){
	        cout<<"no"<<endl;
	    }
	    else if(a>= b && a>=c){ 
	        int mini=min(b,c);
	        b=b-mini;
	        c=c-mini;
	        
	        a=a-min(a,b);
	        a=a-min(a,c);
	        if(a>=0){
	         str="yes";
	       }
	       else{
	           str="no";
	       }
	       
	 
	    }
	    else{
	        int mini=min(b,c);
	        b=b-mini;
	        c=c-mini;
	        
	        a=a-min(a,b);
	        a=a-min(a,c);
	         if(a>=0){
	         str="yes";
	       }
	       else{
	           str="no";
	       }
	    }
        cout<<str<<endl;
	    
	    
	}
	return 0;
}
