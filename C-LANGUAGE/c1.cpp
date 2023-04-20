#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t; cin>>t; 
    for(int i=1; i<=t; i++){ 
int n,p; cin>>n>>p;
        vector<int> v(n,0);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int count=0;
        for(int i=0 ;i<n; i++){
            if(v[i]<=p){
                count =count+1;
                p=p-v[i];  }
        }
        cout<<count<<endl;
    }
    return 0;
}
