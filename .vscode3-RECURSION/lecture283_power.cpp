//power finding 
#include<bits/stdc++.h> //optimised approach
using namespace std;
#define ll long long int
ll power(ll p, ll q){   //time O( log(q) )
        if(q==0)  return 1;
        
        if(q%2==0){  // q is even
            ll ans=power(p,q/2);
            return ans*ans;
            }
        else{
            ll ans=power(p,(q-1)/2);
            return p*ans*ans;
        }
}
int main(){
        ll  p,q; cin>>p>>q;
        ll result =power(p,q);
        cout<<"POWER IS "<<result<<endl; 
    
return 0;
}