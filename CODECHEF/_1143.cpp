#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> a(n);
		for(int i=0; i<n; i++){
		    cin>>a[i];
		}
		int count=0;  //n*(n-1)/2;
		for(int i=0; i<n-1; i++){
		    for(int j=i+1; j<n; j++){
		        int bit=a[i]&a[j];
                if(bit==a[i]){
                    count++;
                }
		    }
	    }
        cout<<count<<endl;
	}
return 0;
}