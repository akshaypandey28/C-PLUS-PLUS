#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin>>n;
    for(int i=1; i<=n; i++){
            if(i%2!=0){
                cout<<"######";  }
            else{
              if(i%4!=0){
                cout<<"*****#";  }
              else{
                cout<<"#*****";
              }
        }
        cout<<endl;
    }
return 0;
}