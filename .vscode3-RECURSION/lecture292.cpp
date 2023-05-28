#include<bits/stdc++.h>
using namespace std;
int f(int *array,int idx, int n){
    if(idx==n-1){
        return array[idx];
    }
    int minimum=min(array[idx],f(array,idx+1,n));
    return minimum;
}
int main(){
    int idx=0; int n=5;
    int array[]={3,10,5,4,6};
    int result=f(array,idx,n);
    cout<<"MINIMUM OF AN ARRAY IS "<<result<<endl;    
return 0;
}