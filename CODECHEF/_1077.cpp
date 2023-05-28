#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int sum=0;
	    int a=n;
	    while(a>0){
	        sum=sum+a%10;
	        a/=10;
	    }
	    if(sum%2==0){
            //int add=0;
	        while(sum%2!=1){
                sum=0;
                n=n+1;
                a=n;
                while(a>0){
	               sum=sum+a%10;
	                a/=10;
	              }
            }
	    }
	    else{
	        while(sum%2!=0){
                sum=0;
                n=n+1;
                a=n;
                while(a>0){
	               sum=sum+a%10;
	                a/=10;
	              }
            }
	    }
	    cout<<n<<endl;
	}
	return 0;
}
