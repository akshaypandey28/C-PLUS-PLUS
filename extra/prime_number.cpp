#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        int sum=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                sum=sum+1;
            }
        }
        if(sum==2){
            cout<<i<<" is a prime number"<<endl;
        }
    }
return 0;
}