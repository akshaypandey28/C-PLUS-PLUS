/* Q1 - Write a program to print the address of an integer variable whose value is input by the
user. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int *p=&n;
    cout<<p<<endl;
return 0;
}