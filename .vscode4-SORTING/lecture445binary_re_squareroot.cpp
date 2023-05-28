//calculate the square root using binary search
#include<bits/stdc++.h>
using namespace std;
int squareRoot(int x){
    int ans=-1;
    int lo=1, hi=x;
    while(lo<=hi){
        int mid=lo+ (hi-lo)/2;
        if(mid*mid <=x){ 
            ans=mid;
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return ans;
}
int main(){
    int x; cin>>x;
    cout<<"The square root of "<<x<<" is "<<squareRoot(x)<<endl;
return 0;
}