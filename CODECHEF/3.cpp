#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t; cin>>t;
    while(t>0){
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
        sort(c.begin(),c.end());
        long long c1=0, c2=0;
        for(long long i=1; i<n+1; i++){
            if(c[i]>0){
                c1++;
            }
            if(c[i]<0){
                c2++;
            }
        }
        for(int i=1; i<n; i++){
            int sum=c[i];
            int x=n-i+1;
            for(long long j=i+1; j<n+1; j++){
                sum=sum+c[j];
                if(sum>0){
                    c1=c1+abs(x-j);
                    break;
                }
                if(sum<0){
                    c2++;
                }
            }
        } 
        if(t==1){
            cout<<c1<<" "<<c2<<endl;
        }
    cout<<abs(c1-c2)<<endl;
    t--;



    }
return 0;
}