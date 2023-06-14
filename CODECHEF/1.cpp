#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void check(int x,int y,int &count){
    int c=x^y;
    string s=to_string(c);
    string a=s;
    reverse(s.begin(),s.end());
    if(s==a){
       // b.push_back(c);
       count++;
    }
    return ;
}
int main(){
	int t; cin>>t;
    while(t--){
        // your code goes here
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int count=0;
        //vector<int> b;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                check(a[i],a[j],count);
            }
        }
        cout<<count+n<<endl;
        
    }
return 0;
}