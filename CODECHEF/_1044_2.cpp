#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
        if(n%2==0){
            int even_odd_no=n/2;
            //har ek even sbhi odd ke sath pairs banayega and vice versa
            cout<<even_odd_no*even_odd_no*2<<endl;
        }
        else{
            int even=n/2;
            int odd=(n/2) + 1;
            cout<<even*odd*2<<endl;
             
        }

	   
	}
	return 0;
}
