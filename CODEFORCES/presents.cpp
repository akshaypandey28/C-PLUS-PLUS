#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    while(n>0 && k>0){
        if(n%10==0){
            n=n/10;
            k--;
        }
        else{
            n=n-1;
            k--;
        }
    }
    cout<<n<<endl;
return 0;
}