//given a number n.find the sum of natural numbers till n but with aletrnate signs.
#include<bits/stdc++.h>
using namespace std;
int signs(int n){
    int ans;
    if(n<1){  // or(n==0)  it is the base case.
        return 0;
    }
    if(n%2!=0){
        ans=signs(n-1)+n;/* ternary operator signs(n-1)+ ((n%2==0)? (-n) : n)) */
    }
    else{
        ans=signs(n-1)-n;
    }
    return ans;
}
int main(){
    int n=10;
    int result=signs(n);
    cout<<result;
return 0;
}