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
        char temp=ch-i+1;
        for(int j=1;j<=i; j++){
            cout<<temp<<" ";
            temp=temp+1; //it gets updated 
        }
        cout<<endl;
    }
return 0;
}