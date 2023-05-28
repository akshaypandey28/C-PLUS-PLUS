//ARMSTRONG NUMBER
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=153;
    int temp=n;
    int sum=0;
    while(temp!=0){
        sum=sum+pow((temp%10),3);
        temp=temp/10;
    }
    if(n==sum){
        cout<<n;
    }
return 0;
}