#include<bits/stdc++.h>
using namespace std;

int countBIts(int n) {
    int count=0;
    while(n>0){
        count+=n&1; // Count the set bits
        n>>=1; // Right shift to check next bit
    }
    return count;
}
int main(){
    int x; cin>>x;
    int count=0;
    while(x>0){ //T.C => logx
        count++;
        x=x&(x-1); //[brian kernighan's algorithm]
    }
    cout<<"the no. of set bits in x is "<<count<<endl;
return 0;
}