/* #include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int  n;cin>>n;
	vector<int> v;
	for(int i=1; i<=n; i++){
	    int s,t; cin>>s>>t;
	    if(s>t){
	        v.push_back(s-t);
	        v.push_back(1);   }
	    else{
	         v.push_back(t-s);
	         v.push_back(2);   } 
        }
        for(auto ele: v){
            cout<<ele<<" ";
        }
        cout<<endl;
	    int maxi=v[0];     
        int w=v[1];
	    for(int i=2; i<v.size()-1; i++){
	        if(maxi<v[i]){
	            maxi=v[i];
	            w=v[i+1];  }
	        i++;
	    }
	    cout<<w<<" "<<maxi<<endl;
	return 0;
}
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int  n;cin>>n; // no of rounds
    int player1=0; //player 1 score initially and used for calculating cf
    int player2=0; //player 1 score initially and used for calculating cf
    int lead=0; // initially leads is zero
    int x=0; // used for comparing with lead
    int w=0; //w represents winner
    for(int i=1; i<=n; i++){
        int s,t; cin>>s>>t;
        player1=player1+s; //cf
        player2=player2+t; //cf
        lead=abs(player1-player2); 
        if(lead>x  && player1>player2){
            x=lead;
            w=1;
        }
        if(lead>x  && player1<player2){
            x=lead;
            w=2;
        }
    }
    cout<<w<<" "<<x<<endl;
return 0;
}