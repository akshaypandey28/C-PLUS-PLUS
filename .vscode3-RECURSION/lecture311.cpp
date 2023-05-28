// print number in increasing order upto the given n=4
#include<bits/stdc++.h>
using namespace std;
int increasing(int n){
    if(n==0){
        return 0;
    }
    n--;
    int ans=(1+increasing(n));
    cout<<ans<<" ";
    return ans;
}
int main(){
        int n=4;
        increasing(n);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
return 0;
}