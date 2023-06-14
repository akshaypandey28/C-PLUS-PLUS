#include<bits/stdc++.h>
using namespace std;
int summ(int &count,int &sum,vector<int> &b,int &k){
    for(int i=0; i<b.size()-1; i++){
            if(b[i+1]-b[i]==1){
                count++;
            }
            else{
                //cout<<count<<endl;
                count++;
                if(k==count){ 
                    sum=sum+1;  }
                else if(k<count){
                    sum=(count*(count+1))/2; 
                }
                count=0;
            }
        }
        if(count>0 || b.size()==1){
            count++;
        }
      // cout<<count<<endl;
            if(count==0){
                sum=sum;
            }
            else if(k==count){
                    //count++;
                    sum=sum+1;
             }
            else if(k<count){
                    //count++;
                    //cout<<"akshay"<<endl;
                    sum=sum+(count*(count+1))/2;
            }
                
        return sum;
}
int main(){
	int t; cin>>t;
   while(t--){
        int n,k,q; cin>>n>>k>>q;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<int> b;
        int j=0;
        for(int i=0; i<n; i++){
            if(a[i]<=q){
                //cout<<a[i]<<endl;
                b.push_back(i);
            }
        }
        int sum=0;
        int count=0;
        if(b.size()==0){
            cout<<0<<endl;
        }
        else{
          int result=  summ(count,sum,b,k);
          cout<<result<<endl;
        }
  }
return 0;
}