#include<bits/stdc++.h>
using namespace std;
/* 
    A
   BAB
  CBABC
 DCBABCD
EDCBABCDE
 */
int main(){
    int n; cin>>n;
    for(int i=1 ;i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(char j=i-1+'A'; j>='A'; j--){
            cout<<j;
        }
        for(char j='B'; j<='B'+i-2; j++){
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