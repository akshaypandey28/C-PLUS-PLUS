#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5; //cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+2; j++){
            if(i<=n/2){
            if((i+j)%2==1){
                cout<<"* ";   }
            else{
                cout<<" ";    }
           }
          else{
                if(i!=n  &&(i+j)%2==1){
                    cout<<"* ";   }
                else if(i!=n  && (i+j)%2==0) {
                    cout<<" ";   }
                else if(i==n  && j==3){
                    cout<<" *";    }
                else{
                    cout<<" ";
                }
            }
          }
          cout<<endl;
        }
        
    
return 0;
}