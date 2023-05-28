#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> array(2*n);
	    for(int i=0; i<2*n; i++){
	        cin>>array[i];
	    }
        sort(array.begin(),array.end());
        int maxi=array[2*n-1];
        vector<int> v(maxi+1,0); //i am counting the frequency of each element
        for(int i=0; i<2*n; i++){
            v[array[i]]++;
        }
        string str="yes";
        for(auto ele: v){
            if(ele>=3){
                str="no";
                break;
            }
        }
        cout<<str<<endl;


    }
return 0;
}
/* 
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int array[2*n];
	    for(int i=0; i<2*n; i++){
	        cin>>array[i];
	    }
	    int count_=0;
	    for(int i=0; i<2*n; i++){
	        int count=0;
	        for(int j=0; j<2*n ; j++){
	            if(array[i]==array[j]){
	                count=count+1; }
	            }
	            count_=count;
	            if(count>=3){
	                cout<<"no"<<endl;
	                break;  }
	          
	    }
	    if(count_<=2){
	        cout<<"yes"<<endl;
	    }
	    
	}
	return 0;
}
 */