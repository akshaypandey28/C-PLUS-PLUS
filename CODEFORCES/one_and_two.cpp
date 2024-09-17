#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int two=0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]==2) two++;
        }
        int left_two=0;
        int ans=-1;
        for(int i=0; i<n-1; i++){
            if(v[i]==2) left_two++;
            if(two-left_two==left_two){
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
