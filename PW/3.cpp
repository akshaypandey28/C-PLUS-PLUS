#include<bits/stdc++.h>
using namespace std;
/* 
   A
  AB
 ABC
ABCD
 */
int main(){
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        char ch='A';
       for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }
return 0;
}