#include<bits/stdc++.h>
using namespace std;
int f(int x,int a,int prime){int ans;
    if(a==1){
        return ans=prime+1;
    }
    if(x%a==0){
        prime=prime+1;
        ans=f(x,a-1,prime);   }
    else{   
        ans=f(x,a-1,prime);    }
    return ans;    }
int main(){
    int x;  cin>>x;  int prime=0;
    int result=f(x,x,prime);
    if(result==2){    cout<<"YES IT IS A PRIME NUMBER";  }
    else{   cout<<"IT IS NOT A PRIME NUMBER";  }   return 0;   }