#include<bits/stdc++.h>
using namespace std;
int f(int *array,int idx,int n,int sum){
    if(idx==n-1){
        return array[idx];
    }
    int ans=f(array,idx+1,n,sum);
    if(ans==sum){
        cout<<"yes"<<endl;
    }
    else{
        return array[idx];
    }
    
}
int main(){
    int array[]={1,2,3,4,5};
    f(array,0,5,6);


return 0;
}