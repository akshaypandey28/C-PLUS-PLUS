#include<iostream>
using namespace std;
/* 
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
 */
int main(){
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(char j='A'; j<='A'+i-1; j++){
            cout<<j;
        }
        for(char j='A'+i-2; j>='A'; j--){
            if(i==1){
                continue;
            }
            cout<<j;
        }
        cout<<endl;
    }
return 0;
}