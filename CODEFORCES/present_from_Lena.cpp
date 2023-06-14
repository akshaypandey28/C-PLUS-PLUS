#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int c=(2*n)+1;
    int x=0;
    int d=((2*n)+1)/2+((2*n)+1)%2;
    for(int i=1; i<=(2*n)+1; i++){
        if(i<=d){
        for(int j=n; j>=i; j--){
            cout<<" ";
        }
        for(int j=0; j<=i-1; j++){
            cout<<j<<" ";
        }
        for(int j=i-2; j>=0; j--){
            cout<<j<<" ";
        }
        }
        else{
            for(int j=1; j<=i-n-1; j++){
                cout<<" ";
            }
            for(int j=0; j<=n-1-x; j++){
                cout<<j<<" ";
            }
            for(int j=n-2-x; j>=0; j--){
                cout<<j<<" ";
            }
            x++;
        }
        
        cout<<endl;
    }
return 0;
}