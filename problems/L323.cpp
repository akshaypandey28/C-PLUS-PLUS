/* decimal to binary */
#include<bits/stdc++.h>
using namespace std;
int f(int n,int power){ int ans;
    if(n==0){
        return 0;  }
    int remainder=n%2;
    int dif=f(n/2,power*10);
    ans=dif+remainder*power;  //also dif=dif+f(n/2,power*10)
    return ans;  }  //also return dif
int main(){
    int n; cin>>n; int power=1;
    int result=f(n,power);
    cout<<result;
return 0; }