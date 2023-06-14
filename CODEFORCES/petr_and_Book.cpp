#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(7);
    for(int i=0; i<7; i++){
        cin>>a[i];
    }
    int count =0;
    int j=0;
    while(n>0){
        n=n-a[j];
        j++;
        count++;
        j=j%7;
    }
    if(count%7==0){
        cout<<7<<endl;
    }
    else{cout<<count%7<<endl;}
return 0;
}