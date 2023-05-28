/* #include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int d; cin>>d; //no of digits in n
	    string str; cin>>str;
	    string s="no";
        int num=stoi(str);
	    while(num>0){
            if((num%10)%5==0){
                s="yes";
                break;
            }
            else{
                num=num/10;
            }
        }
	    cout<<s<<endl;
	    
	}
	return 0;
}
 */
#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int d; cin>>d; //no of digits in n
	    string str; cin>>str;
	    string s="no";
        //int num=stoi(str);
	    for(int i=0; i<d; i++){
	        if(str[i]=='5' || str[i]=='0'){
	            s="yes";
	            break;
	        }
	    }
	    cout<<s<<endl;
	    
	}
	return 0;
}
