#include<bits/stdc++.h>
using namespace std;
string decimal_to_binary(int n){
    string ans="";
    while(n>0){
        if(n%2==0) { //even
            //n is even means lsb is 0
            ans="0"+ans;
        }
        else{ //odd
            //n is odd means lsb is 1
            ans="1"+ans; 
        }
        n=n/2; //also n= n>>1 right shift
    }
    return ans;
}
int binary_to_decimal(string binary){
    int n=binary.size();
    int result=0;
    for(int i=n-1; i>=0; i--){
        int num=binary[i]-'0';
        result=result+ num*(1<<(n-1-i)); //1<<(n-1-i) = 2^(n-1-1)
    }
    return result; 

}
int main(){
return 0;
}