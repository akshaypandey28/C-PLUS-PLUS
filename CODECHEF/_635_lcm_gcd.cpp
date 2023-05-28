#include<bits/stdc++.h>  //submitted code
using namespace std;
int main(){
    int t; cin>>t;
    for(int i=1; i<=t; i++){
    int a,b; cin>>a>>b;
	  
         int divi1=a; int gcd=0; int divi2=b; int c=-1; int d=0;
         while(c!=0){
            if(a>b){
         if(divi1%divi2==0){
             gcd=divi2;
             break;  }
         else{
            d=divi1;
             divi1=divi2;
             divi2=d%divi2;
             c=divi2;  }
            }
        else{
           if(divi2%divi1==0){
             gcd=divi1;
             break;   }
         else{
            d=divi2;
             divi2=divi1;
             divi1=d%divi1;
             c=divi1; }  }
        long int lcm=(long int)a/(long int)gcd*b;
        cout<<gcd<<" "<<lcm<<endl;
    }
    }
return 0;
}