#include<bits/stdc++.h>//1->Given an integer n, find the maximum power of two that is smaller than n.
using namespace std; //2->also Given an integer n, find the maximum power of two that is greater than n.
//for 2-> temp*2;
int main(){
    int n; cin>>n;
    int temp;
    while(n>0){
        temp=n;
        n=n&(n-1);
    }
    cout<<temp<<endl;
return 0;
}