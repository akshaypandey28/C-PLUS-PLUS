#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    int maxi=max(a,b);
    int flag=true;
    while(flag){
        if(maxi%a==0 && maxi%b==0){
            cout<<maxi<<endl;
            break;
        }
        else{
            maxi++;
        }
    }
return 0;
}
/* long int lcm=(long int)a/(long int)gcd*b;
        cout<<gcd<<" "<<lcm<<endl;
         */