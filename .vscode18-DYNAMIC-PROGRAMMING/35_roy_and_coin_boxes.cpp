#include<bits/stdc++.h>
using namespace std;
/* https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/roy-and-coin-boxes-1/ */

//1st method
int main(){
    int n; cin>>n;
    vector<int> f(n+1,0); //represents no of coins in the ith box
    int m; cin>>m;
    vector<int> l(n+1,0);
    vector<int> r(n+1,0);
    for(int i=0; i<m; i++){
        int L,R; cin>>L>>R;
        l[L]++;
        r[R]++;
    }
    f[1]=l[1];  //base case 
    //formula is f[i]=l[i] + f[i-1] - r[i-1]
    for(int i=2; i<=n; i++){
        f[i]=l[i] + f[i-1] - r[i-1];  
    }
    vector<int> c(10000005,0); //represents no of box with x coins
    for(int i=0; i<=n; i++){
        int coins=f[i]; //no of coins in the ith box
        c[coins]++; 
    }
    for(int i=c.size()-2; i>=0; i--){
        c[i]=c[i]+c[i+1]; //suffix sum 
    }
    int q; cin>>q;
    while(q--){
        int num; cin>>num;
        cout<<c[num]<<endl;
    }
return 0;
}


//2nd method
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> f(n+10, 0);//represents no of coins in the ith box
    int m;
    cin>>m;
    for(int i = 0; i < m; i++) {
        int L, R;
        cin>>L>>R;
        f[L]++;
        f[R+1]--;
    }
    for(int i = 1; i < f.size(); i++) {
        f[i] = f[i] + f[i-1]; //prefix sum
    }
    vector<int> c(10000005, 0); //represents no of box with x coins
    for(int i = 0; i <= n; i++) {
        int coins = f[i];
        c[coins]++;
    }
    for(int i = c.size() - 2; i >= 0; i--) {
        c[i] = c[i] + c[i+1];//suffix sum 
    }
    int q;
    cin>>q;
    while(q--) {
        int num;
        cin>>num;
        cout<<c[num]<<"\n";
    }
    return 0;
}