#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/single-number-iii/description/ */
void find(int *arr,int n){
    int res=0;
    for(int i=0; i<n; i++) res=res^arr[i];
    //res zero nhi hai because do unique number ka xor zero nhi aa skta
    //means ye 100% hai ki minimum ek bit differ krega dono number ke bich
    //find the first bit where it differ's let's say it differ at kth bit

    int temp=res;
    int k=0;
    while(true){
        if((temp&1)==1) break;
        k++;
        temp/=2;  //temp>>1
    }
    //again iterate and take xor of only those value whose kth bit is set
    //let's res=x^y means x kth bit is 1 and y kth bit is 0 (suppose)
    //if there is not any number present in the array whose kth bit is set then x is the answer 
    //if present then it's duplicate(a) must be there so and xor will be zero of (a^a) but x kth bit is also set
    //then (a^x^a)= x which is answer
    int retVal=0;
    for(int i=0; i<n; i++){
        if(( (arr[i]>>k)&1 )==1) retVal^=arr[i];
    }
    cout<<"unique numbers are "<<retVal<<" "<<(retVal^res)<<endl;
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    find(arr,n);
return 0;
}