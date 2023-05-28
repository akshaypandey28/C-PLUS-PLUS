#include<bits/stdc++.h>
using namespace std;/* 
E
D E
C D E
B C D E
A B C D E
 */
int main(){
    int n; cin>>n; 
    char ch='A'+n-1;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=i; j++){
            cout<<ch<<" ";
            ch=ch+1; //it gets updated 
        }
        ch=ch-i-1;
        cout<<endl;
    }
return 0;
}