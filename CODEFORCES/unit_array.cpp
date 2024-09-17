#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        int sum=0;
        int mul=1;
        for(int i=0; i<n; i++){
            cin>>v[i];
            sum+=v[i];
            mul*=v[i];
        }
        if(mul==1 and sum>=0) cout<<0<<endl;
        else{
            int count=0;
            while(mul==-1 || sum<0){
                sum+=2; //as on changing -1 to 1 , -1 opposes two times firstly gets add in positive and secondly
                //cancelling one negative value
                mul*=-1;
                count++;
            }
            cout<<count<<endl;
        }
    }
return 0;
}