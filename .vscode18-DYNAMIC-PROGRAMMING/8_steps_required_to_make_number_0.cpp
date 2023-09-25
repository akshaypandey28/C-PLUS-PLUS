//Removing Digits  CSES Problem Set 
//Accepted Solution
#include<bits/stdc++.h>
using namespace std;
//Time and Space : O(n)
/* SELF SOLUTION  
int to_subtract(int temp){
    int maxi=0;
    while(temp>0){
        maxi=max(maxi,temp%10);
        temp=temp/10;
    }
    return maxi;
}
int f(int n){
    int count=0;
    while(n>0){
        int maxi=to_subtract(n);
        count++;
        n=n-maxi;
    }
    return count;
} */
vector<int> get_digits(int n){
    vector<int> result;
    while(n>0){
        if(n%10!=0){
            result.push_back(n%10);
        }
        n/=10;
    }
    return result;
}
vector<int> dp;
int fi(int n){ //Top to Down
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
    int result=INT32_MAX;
    vector<int> digits=get_digits(n);
    for(int i=0; i<digits.size(); i++){
        result=min( result, fi( n-digits[i] ) );
    }
    return dp[n]=1+result;
}
int fbu(int num){
    dp[0]=0;
    for(int i=1; i<=9; i++) dp[i]=1;
    for(int n=10; n<=num; n++){
        //n -> state
        vector<int> digits=get_digits(n);
        int result=INT32_MAX;
        for(int i=0; i<digits.size(); i++){
            result=min( result, dp[ n-digits[i] ] );
        }
        dp[n]=1 + result;
    }
    return dp[num];
}
int main(){
    int n; cin>>n;
    //cout<<"The no of steps required to make number 0 is "<<f(n)<<endl;
    //cout<<f(n)<<endl;
    dp.clear(),
    dp.resize(1000005,-1);
    cout<<fi(n)<<endl;
    cout<<fbu(n)<<endl;
return 0;
}