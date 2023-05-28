#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;  cin>>t;
     for(int i=1;i<=t; i++){
         int n; cin>>n; //possibilities are 28,29,30,31
         if(n>=6  &&  n%7==6){ // for saturday day and for more than or equal to 6days
             cout<<(n/7)+1<<endl;
         } 
         // we can also ignore n>=6 
         //else if(n>=6){ // for other cases of no of days
        //     cout<<n/7<<endl;
         //}
         else{ // for less than 6 days
             cout<<n/7<<endl;
         }
         
         
     }
	return 0;
}
