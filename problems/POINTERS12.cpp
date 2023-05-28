/* Q2 - Write a program to find the product of 2 numbers using pointers */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    int *p=&n;
    int *q=&m;
    cout<<(*p * *q)<<endl;
return 0;
}