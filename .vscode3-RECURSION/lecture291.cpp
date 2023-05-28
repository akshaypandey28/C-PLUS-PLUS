#include<bits/stdc++.h>
using namespace std;
void print(int *array,int idx, int n){
    if(idx==n){  // base caselecture
        return;
    }
    cout<<array[idx]<<" ";
    print(array,idx+1,5); //assume it works correctly
}
int main(){
    int idx=0;
    int array[]={1,2,3,4,5};
    print(array,idx,5);

return 0;
}