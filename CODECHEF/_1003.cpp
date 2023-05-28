#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	//int t; cin>>t;
	//while(t--){
	    int maxT,maxN,sumN; cin>>maxT>>maxN>>sumN;
	    int maxiT=sumN/maxN;
	    int store=maxiT;// cout<<"store is "<<store<<endl;
	    float maxiiT=(float)sumN/maxN;//cout<<"maxiiT is "<<maxiiT<<endl;
	    if(maxiiT>maxiT){
	        maxiT=maxiT+1;
	    }
	    if(maxiT<=maxT){
	        //maxiT will be considered as maximum that means maximum iterations depends
	        //upon maxiT
	        int ans=0;
	        //int sumNafterdividing =maxN;
	        int sumN_=sumN%maxN;
	        if(maxiiT>store){
	            for(int i=1; i<=store; i++){
	            ans=ans+maxN*maxN;
                //cout<<ans<<" ";
	        }
            //cout<<"---------"<<endl;
	        cout<<ans+(sumN_*sumN_);
	        }
	        else{
	            for(int i=1; i<=maxiT; i++){
	            ans=ans+maxN*maxN;
                //cout<<ans;
	        }
           // cout<<"*****"<<endl;
	        cout<<ans+(sumN_*sumN_);
	        }
	        
	    }
	    else{ //(maxiT>maxT)
	        int ans=0;
	        //int sumNafterdividing =maxN;
	        int sumN_=sumN%maxN;
	        if(maxiiT>store){
	            for(int i=1; i<=store; i++){
	            ans=ans+maxN*maxN;
                //cout<<ans<<" ";
	        }
           // cout<<"-"<<endl;
	        cout<<ans+(sumN_*sumN_);
	        }
	        else{
	            for(int i=1; i<=maxT; i++){
	            ans=ans+maxN*maxN;
                //cout<<ans;
	        }
            //cout<<"*"<<endl;
	        cout<<ans+(sumN_*sumN_);
	        }
	    }
	//}
	return 0;
}
