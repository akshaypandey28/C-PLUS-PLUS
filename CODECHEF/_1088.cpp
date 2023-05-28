#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
    long long n,q; cin>>n>>q;
	vector<vector<long long>> a(2,vector<long long> (n));
	//vector<int> b(n);
	for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
	    cin>>a[i][j];
	}}
	
    while(q--){
    long long sum=0;
        int l,r; cin>>l>>r;
        l=l-1; r=r-1;
		//cout<<l<<" "<<r<<endl;
        //int row=0;
        for(int i=l; i<=r; i++){
            sum=sum+a[0][i]*a[1][i];
        }
        cout<<sum<<endl;
    }
    
	
	
	return 0;
}
