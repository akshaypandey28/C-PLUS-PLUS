#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;  cin>>t;
     for(int i=1;i<=t; i++){ 
         int a,b; cin>>a>>b; //goals
         int c,d; cin>>c>>d;
         if(a<=c  && b<=d){
             cout<<"possible"<<endl;
         }
         else{
             cout<<"impossoble"<<endl;
         }
         
     }
	return 0;
}
