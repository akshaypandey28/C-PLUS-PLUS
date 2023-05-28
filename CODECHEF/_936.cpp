#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int x; cin>>x;
	    int count=0;
	    if(x%10==0){
	        cout<<0<<endl;
	    }
	    else if(x%10==5) {
	        while(x%10!=0){
	            x=x*2;
	            count=count+1;
	        } 
        cout<<count<<endl;
	    }
        else{
            cout<<-1<<endl;
        }
        
	}
	return 0;
}
