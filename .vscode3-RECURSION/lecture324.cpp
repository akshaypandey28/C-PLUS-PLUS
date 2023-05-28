//ARMSTRONG NUMBER
#include<bits/stdc++.h>
using namespace std;
int f(int n,int d){
    if(n==0){
        return 0;
    }
    int ans=pow(n%10,d) + f(n/10,d);
    return ans;
}
int main(){
    int n; cin>>n; int d=3;
    int result=f(n,d);
    if(result==n){
        cout<<n<<endl;
    }
    else{
        cout<<"NOT A ARMSTRONG NUMBER"<<endl;
    }
return 0;
}