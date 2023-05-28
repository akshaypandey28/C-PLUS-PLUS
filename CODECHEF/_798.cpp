#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;  cin>>t;
     for(int i=1;i<=t; i++){
         int x,y; cin>>x>>y;
         int z;
         //if(x>=y){
             if((x%y)==0){ //checking for the remainder as if exactly divisible
                 z=(y/x)-1; //then there should be 1 month less for rent
                 cout<<z<<endl;   }
             else{
                 z=y/x; //if not then whatever value comes on division 
                 cout<<z<<endl;   }//that should be no of months
         //}
         //else{
         //    cout<<(x/y)<<endl;
        // }
         
     }
	return 0;
}
