#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        vector<long long> a(n+1);
        for(long long i=1; i<n+1; i++){
            cin>>a[i];
        }
        vector<long long> b(n+1);
        for(long long i=1; i<n+1; i++){
            b[i]=pow(2,(i-1));
        }
        vector<long long> c(n+1);
        for(long long i=1; i<n+1; i++){
            c[i]=a[i]*b[i];
        }
        long long c1=0, c2=0;
        for(long long i=1; i<n+1; i++){
            if(c[i]>0){
                c1++;
            }
            if(c[i]<0){
                c2++;
            }
        }
        /* for(int i=1; i<n+1; i++){
            int sum=c[i];
            for(long long j=i+1; j<n+1; j++){
                sum=sum+c[j];
                if(sum>0){
                    c1++;
                }
                if(sum<0){
                    c2++;
                }
            }
        } */
        /* if(c1==1 && c2==1){
            cout<<0<<endl;
        }
        else if(c1==1){
        cout<<c2*(c2+1)/2<<endl; }
        else if(c2==1){
            cout<<c1*(c1+1)/2<<endl;
        }
        else{
            cout<<abs(1*(c1+1)/2 -(c2*(c2+1)/2));
        } */




    }
return 0;
}