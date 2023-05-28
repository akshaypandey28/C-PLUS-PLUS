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
		long long n; cin>>n;
		vector<string> v(n);
		for(int i=0; i<n; i++){
		    cin>>v[i];
		}
		int count=0;
		int count1=0;
		int count2=0;
		int count3=0;
		int count4=0;
		for(int i=0; i<n; i++){
		    if(v[i]=="cakewalk"){
		        count++;
		    }
            else if(v[i]=="simple" ){
                count1++;
            }
            else if(v[i]=="easy"){
                count2++;
            }
		    else if(v[i]== "easy-medium" || v[i]=="medium"){
		        count3++;
		    }
		    else{
		        count4++;
		    }
		}
		if(count>=1 && count1>=1 && count2>=1 && count3>=1 && count4>=1){
		    cout<<"YES"<<endl;
		}
		else{
		    cout<<"NO"<<endl;
		}
	}
	
return 0;
}