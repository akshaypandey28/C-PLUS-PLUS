#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int ans=1;
    int ans1=1;
    
    for(int i=1; i<=n; i++){
        if(i%2==0){
        for(int j=1; j<=i; j++){
            cout<<ans<<" ";
            ans=ans+1;  }
            cout<<endl;
            ans1=ans+i;
        
        }
        else{
          for(int j=1; j<=i; j++){
            cout<<ans1<<" ";
            ans1=ans1-1;}
            cout<<endl;  
            ans=ans1+i+1;
            
        }
        
    }
return 0;
}