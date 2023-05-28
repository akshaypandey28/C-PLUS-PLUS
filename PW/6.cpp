#include<bits/stdc++.h>
using namespace std;
/* 
   A
  ABC
 ABCDE
ABCDEFG
 */
int main(){
    int n; cin>>n;
    for(int i=1 ;i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(char j='A'; j<='A'+(2*i-2); j++){
            cout<<j;
        }
        cout<<endl;
    }
return 0;
}