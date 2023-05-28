#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	long long t; cin>>t;
	while(t--){
		string n; cin>>n;
        vector<int> v(123,0);
        for(int i=0; i<n.size(); i++){
            int st=n[i];
            v[st]++;
        }
        int cost=0;
        for(int i=0; i<123; i++){
            cost=cost + (v[i]/2) + (v[i]%2);
        }
        cout<<cost<<endl;
		
	}
	
return 0;
}