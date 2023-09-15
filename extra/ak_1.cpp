#include<bits/stdc++.h> //count no of setbits
using namespace std;
int f(int num){
    int count=0;
    while(num>0){
        if(num%2==1){
            count++;
        }
        num=num/2;
    }
    return count;
}
int main(){
    int num; cin>>num;
    cout<<f(num)<<endl;
return 0;
}