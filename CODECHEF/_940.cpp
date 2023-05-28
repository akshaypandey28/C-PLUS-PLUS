/* #include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n; //frmaes
	    vector<int> v(n); // for storing the value from A1 to An
	    for(int i=0; i<n; i++){
	        cin>>v[i];
	    }
	    if(v.size()==1){
	        cout<<1<<endl;
	    }
	    else{
	       for(int j=0; j<v.size()-1; j++){
	        if( v[j]== v[j+1] ||  v[j]==v[j-1] ){
	            v.erase(v.begin() + j);    }
	      }
          cout<<v.size()<<endl;
	  }

	}
	return 0;
} */
#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n; //frmaes
	    vector<int> v(n); // for storing the value from A1 to An
	    for(int i=0; i<n; i++){
	        cin>>v[i];
	    }
        int count =0;
	    if(v.size()==1){
	        cout<<1<<endl;
	    }
	    else{
	       for(int j=0; j<v.size()-1; j++){
            
	        if( v[j]== v[j+1]){
                count=count+1;
	            //v.erase(v.begin() + j);   
                 }
	      }
          cout<<v.size()-count<<endl;
	  }

	}
	return 0;
}
