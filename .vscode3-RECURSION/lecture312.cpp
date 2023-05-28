//print number in increasing order upto the given n=20
#include<bits/stdc++.h>
using namespace std;
void f(int n){
    if(n<1){
        return;
    }
    f(n-1);
    cout<<n<<" ";
}
int main(){
    int n=20;
    f(n);
return 0;
}