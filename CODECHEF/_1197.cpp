#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>
using namespace std;
int main(){
	long long t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());

		int count=0;
		for(int i=0; i<n; i++){
			if(a[i]==i+1){
				
			}
			else if(a[i]==i){
				
				count++;    }
			else {
				count=-1;
				break;  }
		}
		cout<<count<<endl;

		


		
	}
	
return 0;
}