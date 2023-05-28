#include<bits/stdc++.h>
using namespace std;
/* 
*
**
***
****
***
**
*
 */
int main(){
    int n; cin>>n;
    int a=2*n-1;
    for(int i=1; i<=a; i++){
        if(i<=n){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        }
        else{
            for(int j=1; j<=a-i+1; j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
return 0;
}