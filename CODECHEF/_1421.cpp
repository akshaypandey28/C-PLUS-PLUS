#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        // your code goes here
        string a,b; cin>>a>>b;
        int n; cin>>n;
        //cout<<a<<" "<<b<<" "<<n<<endl;
        int c= (a[0]-'0')*10 +(a[1]-'0');
        int g= (b[0]-'0')*10 +(b[1]-'0');
        int x,y;
        int sum=0;
        if(g>c){
           x= (a[3]-'0')*10 +(a[4]-'0');
           y= (b[3]-'0')*10 +(b[4]-'0');
           
           if(x!=0 || y!=0){sum=(60-y)+x;}
        }
        else{
           x= (a[3]-'0')*10 +(a[4]-'0');
           y= (b[3]-'0')*10 +(b[4]-'0');
           if(x!=0 || y!=0){sum=(60-x)+y;}
        }
       // cout<<x<<" "<<y<<endl;
        int min1=abs(c-g)*60 +n+sum;
        int min2=abs(c-g)*60 +sum;
        int sec;
        if(n*2<=min2){
            sec=min2;
        }
        else{
            sec=min2 +( n /2);
        }
        cout<<min1<<".0"<<" "<<sec<<".0"<<endl;
        
    }
return 0;
}