#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    unordered_set<int> s;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        
        s.insert(arr[i]);
    }
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int gcd=__gcd(arr[i],arr[j]);
            int _lcm=lcm(arr[i],arr[j]);
            
            if(s.find(_lcm*gcd)!=s.end()) count++;
        }
    }
    cout<<count<<endl;
return 0;
}