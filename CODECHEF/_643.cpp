#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;  cin>>t;
     for(int i=1;i<=t; i++){
         int x,y; cin>>x>>y;
         if(x<(2*y)){
             cout<<0<<endl;
         }
         else if(x==(2*y)){
             cout<<1<<endl;
         }
         else{
             cout<<(x/(2*y))<<endl;
         }
     }
	return 0;
}
