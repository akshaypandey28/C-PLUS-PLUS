#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
   while(t--){
	vector<long long> v(26);
	for(int i=0; i<26; i++){
	    cin>>v[i];
	}
	string str; cin>>str;
	//int n=
	vector<int> pan(26,0);
	for(int i=0; i<str.size(); i++){
	    int a=str[i]-'a';
	    pan[a]++;
	}
	/* for(int i=0; i<pan.size(); i++){
        cout<<pan[i]<<" ";
    }
    cout<<endl; */
	vector<int> missing;
	for(int i=0; i<26; i++){
	    if(pan[i]==0){
	    missing.push_back(i); }
	}
    /* for(int i=0; i<missing.size(); i++){
        cout<<missing[i]<<" ";
    }
    cout<<endl; */
    int sum=0;
    for(int i=0; i<missing.size(); i++){
        sum=sum+v[missing[i]];
    }
    cout<<sum<<endl;
    }
	return 0;
}
