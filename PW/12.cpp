/* 
********
***  ***
**    **
*      *
**    **
***  ***
********
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=7,m=8;// cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if((i==1 && j<=m/2) || (j==1 && i<=n/2) || (i+j<=m/2+1) ||
               (i==1 && j>=m/2) || (j==m && i<=n/2) || (j-i>=m/2) ||
                (i>n/2 && j==1) || (j<=m/2 && i==n) || (i-j>=m/2-1) || 
                (i>n/2 && j==m) || (j>m/2 && i==n) || (i+j>=(m/2)+m)
            ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}