#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        unordered_map<int,int> m;
        for(int i=0; i<n; i++){
            cin>>v[i];
            m[v[i]]++;
        }
        if(m.size()>2) cout<<"NO"<<endl;
        else if(m.size()==1) cout<<"YES"<<endl;
        else{ //m.size() == 2
            vector<int> check;
            for(auto ele:m) check.push_back(ele.second);
            if(n%2==0){
                if(check[0]==n/2 and check[1]==n/2) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else{
                if(   (check[0]==(n/2)+1 and check[1]==n/2) or (check[1]==(n/2)+1 and check[0]==n/2)  ){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            
        }
    }
return 0;
}