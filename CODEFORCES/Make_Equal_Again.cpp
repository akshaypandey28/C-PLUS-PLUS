#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        int front=1;
        int back=1;
        int j=n-1;
        while(arr[j]==arr[j-1]){
            back++;
            j--;
        }
        j=0;
        while(arr[j]==arr[j+1]){
            front++;
            j++;
        }
        if(arr[0]==arr[n-1]){
            int a=n-front-back;
            if(a<=0) cout<<0<<endl;
            else cout<<a<<endl;
        }
        else {
            int maxi=max(back,front);
            cout<<n-maxi<<endl;
        }
    }
return 0;
}