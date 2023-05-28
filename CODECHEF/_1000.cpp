//all test cases passes
#include <iostream>
#include<string>
using namespace std;
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    string str; cin>>str;
        int count=0;
	    for(int i=0; i<n; i++){
            if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
                count++;
            }
            else{
                count=0;
            }
            if(count>=4){
                cout<<"no"<<endl;
                break;
            }
        }
        if(count<=3){
            cout<<"yes"<<endl;
        }
	}
	return 0;
}
