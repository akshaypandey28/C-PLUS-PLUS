#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;  cin>>t;
     for(int i=1;i<=t; i++){
         int n; cin>>n;
         vector<int> v1(n+1);
         v1[0]=0;
         for(int j=1; j<n+1; j++){
             cin>>v1[j];
         }
         
         vector<int> v2(n+1);
         v2[0]=0;
         for(int j=1; j<n+1; j++){
             cin>>v2[j];
         }
         int count=0;
         for(int j=1;j<n+1; j++){
             if( v2[j] <= (2*v1[j])  && v1[j] <= (2*v2[j]) ){
                 count++;
             }
         }
         cout<<count<<endl;
         }
	return 0;
}
