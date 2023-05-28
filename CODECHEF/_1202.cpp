#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    //vector<int> a(n);
	    string s; cin>>s;
        int count=0;
        if(s[0]=='1'){
            count++;
        }
        if(s[n-2]=='0'){
            count++;
        }

        for(int i=0; i<n-1; i++){
            if(s[i]=='0' && s[i+1]=='1'){
                count++;
                i++;
            }
        }
        cout<<count<<endl;
	}
	return 0;
}
