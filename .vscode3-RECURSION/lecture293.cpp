#include<bits/stdc++.h>
using namespace std;
int sum(int *array,int idx, int n){
    if(idx==n-1){
        return array[idx];
    }
    int ans=array[idx]+sum(array,idx+1,n);
    return ans;
}
int main(){
    int n=5; int array[]={2,3,5,20,1};
    int idx=0;
    int result=sum(array,idx,n);
    cout<<"SUM OF THE ARRAY "<< result<<endl;
return 0;
}