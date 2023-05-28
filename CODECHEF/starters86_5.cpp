#include <iostream>
#include<vector>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;  cin>>t;
     for(int i=1;i<=t; i++){
         int n; cin>>n;
         string s; cin>>s;
         string str="";
         int j=0;
         for(; j<n; j++){
             if((s.length()==1 || s.length()==0) && j%2==0){
                 cout<<"Ramos"<<endl;
                 break;
             }
             if((s.length()==1 || s.length()==0) && j%2==1){
                 cout<<"Zlatan"<<endl;
                 break;
             }
            else if(s[j]!=s[j+1]){
                s.erase(s.begin() + j); 
                s.erase(s.begin() + j+1);
                //cout<<"Zlatan"<<endl;
                //break;
             }
             else{
                if(j%2==1){
                    cout<<"Zlatan"<<endl;
                    break;
                }
                else{
                    cout<<"Ramos"<<endl;
                    break;
                }
             }
         }
             
         
     }
	return 0;
}
