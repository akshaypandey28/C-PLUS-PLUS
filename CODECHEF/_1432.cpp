#include <bits/stdc++.h>
using namespace std;
#include<vector>
#include<map>

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long arr[n];
	    map<long long,long long>m;
	   for(int i=0;i<n;i++)
	   cin>>arr[i];
	   
	   sort(arr,arr+n);
	   reverse(arr,arr+n);
	   
	   for(int i=0;i<n;i++)
	   m[arr[i]]++;
	   
	   int check=1;
	   for(auto it:m)
	   {
	       if(it.second%2==0){
	           check=0;
	           break;
	       }
	   }
	   if(check==1)
	   cout<<"Zenyk\n";
	   else
	   cout<<"Marichka\n";
	    
	}
}