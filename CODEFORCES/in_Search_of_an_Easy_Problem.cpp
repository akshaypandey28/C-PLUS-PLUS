#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    vector<int> a(t);
    for(int i=0; i<t; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(a[t-1]==1){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
return 0;
}