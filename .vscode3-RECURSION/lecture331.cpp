#include<bits/stdc++.h>
using namespace std;
void f(int *array,int idx,int n, int targetvalue){
    if(idx==n){
    cout<<"THE VALUE IS NOT PRESENT"; // array is tarversed completely 
        return; //but there is no element value =targetvalue
    }
    if(targetvalue==array[idx]){
       cout<<"YES THE VALUE IS PRESENT AND THE INDEX = "<<idx<<endl;
       return; // cout<<"THE VALUE IS NOT PRESENT";
    }
    else{
        f(array,idx+1,n,targetvalue);
    }
}
int main(){
    int n=8; int idx=0; int targetvalue; cin>>targetvalue;
    int array[n]={4,12,54,14,3,8,6,1};
    f(array,idx,n,targetvalue);

return 0;
}