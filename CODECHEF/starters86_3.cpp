#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;  cin>>t;
     for(int i=1;i<=t; i++){
         int n; cin>>n;
         if((n%2==0 && n<=50) || (n%2==0 && n>=50) ){
          cout<<(abs(50-n))/2<<endl;   
         }
         else if(n<50){
             int x=(50-n);
             int y=x/2; //gives minutes
             n=n+ (y*2); // becomes equal to 49 or even 
             if(n%2==0){
                 cout<<(50-n)/2<<endl;  }
             else{
                 cout<<y+3<<endl;}
             }
         else{
             int x=(n-50);
             int y=x/2; //gives minutes
             n=n- (y*2); // becomes equal to 50 or  51
             if(n%2==0){
                 cout<<y<<endl;  }
             else{
                 cout<<y+2<<endl;}
             
         }    
         
     }
	return 0;
}
