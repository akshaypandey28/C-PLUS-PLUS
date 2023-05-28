// greatest common divisor
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b>a){     return gcd(b,a);    }
    if(b==0){    return a;            }  //base case
    int ans=gcd(b,a%b);
    return ans;
}
int main(){
    int a,b; cin>>a>>b;
    int result=gcd(a,b);
    cout<<"THE HCF IS "<<result<<endl;
return 0;
}