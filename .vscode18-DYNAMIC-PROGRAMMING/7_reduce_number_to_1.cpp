#include<bits/stdc++.h>
#define inf INT32_MAX
using namespace std;

//both function gives same answer

int f(int n,int count){  //normal method as how many number of call can be made as there is fixed no. of call
    if(n==1) return count;
    if(n%2==0) f(n/2,count+1);
    if(n%3==0) f(n/3,count+1);
    else f(n-1,count+1);
}

int fu(int n){ //recursive method
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    return 1 + min( { fu(n-1) ,(n%2==0) ? fu(n/2) : inf, (n%3==0) ? fu(n/3) : inf } );
}

vector<int> dp;

int ftd(int n){ //top to down
    //Time and Space : O(n)
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=1 + min( { ftd(n-1) ,(n%2==0) ? ftd(n/2) : inf, (n%3==0) ? ftd(n/3) : inf } );
}

int fbu(int n){ //bottom to up
    //Time and Space : O(n)
    dp.clear();
    dp.resize(n+1,-1);
    dp[1]=0;
    dp[2]=dp[3]=1;
    for(int i=4; i<=n; i++){ 
        dp[i]=1 + min( { dp[i-1] ,(i%2==0) ? dp[i/2] : inf, (i%3==0) ? dp[i/3] : inf } );
    }
    return dp[n];
}
int main(){
    int n; cin>>n;
    int count=f(n,0);
    cout<<count<<endl;
    cout<<"The no of ways is "<<fu(n)<<" "<<ftd(n)<<" "<<fbu(n)<<endl;
    
return 0;
}