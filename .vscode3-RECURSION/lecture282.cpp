//power finding normal method
#include<bits/stdc++.h> //time O(q)
using namespace std; //brute force approach
int power(int p, int q){
    if(q==0){
        return 1;
    }
    int ans=p*power(p,q-1);
    return ans;
}
int main(){
    int p,q; cin>>p>>q;
    int result=power(p,q);
    cout<<"POWER IS "<<result<<endl;
return 0;
}