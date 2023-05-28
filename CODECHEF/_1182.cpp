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
		string n; cin>>n;
		for(long long i=0; i<n.size(); i++){
		    if(n.substr(i,5)=="party"){
                n.replace(i,5,"pawri");
                //n.substr(i,5)="pawri";
                //cout<<n.substr(i,5)<<endl;
                i+=4;
            }
		}
        cout<<n<<endl;
		
	}
	
return 0;
}