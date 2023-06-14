#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(2*n);
    for(int i=0; i<2*n; i++){
        cin>>a[i];
    }
    // int maxi=a[1]+a[3]-2*a[2];
    // int seats=maxi;
    // for(int i=4; i<2*n; i+=2){
    //     maxi=max(maxi,maxi-a[i]+a[i+1]);
    //     if(maxi>seats){
    //         seats=maxi;
    //     }
    // }
    // cout<<seats<<endl;
    int maxi=a[1],seats=a[1];
    int neg=0;
    for(int i=2; i<2*n; i+=2){
        neg=neg+a[i+1]-a[i];
        if(neg>0){
            seats+=neg;
            neg=0;
        }
    }
    cout<<seats<<endl;
    

return 0;
}