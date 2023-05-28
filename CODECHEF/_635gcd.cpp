#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
         int divi1=a; int gcd=0; int divi2=b; int c=-1; int d=0;
         while(c!=0){
            if(a>b){
         if(divi1%divi2==0){
             gcd=divi2;
             break;
         }
         else{
            d=divi1;
             divi1=divi2;
             divi2=d%divi2;
             c=divi2;
         }
            }
        else{
           if(divi2%divi1==0){
             gcd=divi1;
             break;
         }
         else{
            d=divi2;
             divi2=divi1;
             divi1=d%divi1;
             c=divi1;
         } 
        }
        }
        cout<<gcd<<endl;
return 0;
}
/* int a,b;
	    cin>>a>>b;
	    int gcd=1;
	    int j = min(a,b);
	    for(int i=1;i<=j;i++){
	        if(a%i==0 && b%i==0 ){
	            gcd=i;
	        } */