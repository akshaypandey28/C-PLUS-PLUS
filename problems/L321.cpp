#include<bits/stdc++.h>
using namespace std;
int product(int x,int y){
    if(y<1){
    return y;
    }
    int ans=x+product(x,y-1);
    return ans;
}
int main(){
    int x,y; cin>>x>>y;
    int result = product(x,y);
    cout<<result;
return 0;
}