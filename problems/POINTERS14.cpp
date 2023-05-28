/* Q4 - Implement the swap function using pointers. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n; cin>>m>>n;
    int *p=&m, *q=&n;
    swap(*p,*q);
    cout<<"M = "<<m<<" N = "<<n<<endl;
return 0;
}