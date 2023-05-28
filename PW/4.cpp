#include<bits/stdc++.h>
using namespace std;
/* 
1 
2 1 
3 2 1 
4 3 2 1
 */
int main(){
    int n; cin>>n; 
    for(int i=1; i<=n; i++){
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;

    }
return 0;
}