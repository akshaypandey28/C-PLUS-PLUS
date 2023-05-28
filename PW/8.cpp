#include<bits/stdc++.h>
using namespace std;
/* 
    Z
   YZY
  XYZYX
 WXYZYXW
VWXYZYXWV
 */
int main(){
     int n; cin>>n;
    for(int i=1 ;i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(char j=1-i+'Z'; j<='Z'; j++){
            cout<<j;
        }
        for(char j='Y'; j>='Y'+(-i+2); j--){
            if(i==1){
                break;
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }
return 0;
}