#include<bits/stdc++.h>
using namespace std;
int f(int *array,int idx,int n,int maxi){
    if(idx==n-1){
        return array[idx];
    }
    if(maxi<array[idx+1]){
        maxi=array[idx+1];  
        f(array,idx+1,n,maxi);
    }
    return maxi;
}int main(){
    int n=4; int array[]={1,4,32,5};
    int maxi=array[0];
    cout<<f(array,0,n,maxi);
return 0;
}

    