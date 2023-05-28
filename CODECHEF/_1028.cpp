#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int a,b; cin>>a>>b;
	    int l=0,bob;
	    int li=0,bi=0;
	    while(li<a && bi<b){
	       if(li<a){ 
	           if(l==0){
	               l=1; }
	               
	           else{
	               l=l+2; }
	               
	            li=l+li;
	            
	            if(li>a){
	              cout<<"Bob"<<endl;
	              break;
	            }
	       }
	       
	       if(bi<b){ 
	           bob=l+1;
	           bi=bob+bi;
	           if(bi>b){
	               cout<<"Limak"<<endl;
	           }
	       }
	       
	}
    }
	return 0;
}
