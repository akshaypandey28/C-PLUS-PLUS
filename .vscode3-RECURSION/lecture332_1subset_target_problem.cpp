#include<bits/stdc++.h>
using namespace std;
void f(int *array,int n, int idx, int sum,vector<int> &result,int target){
    if(idx==n || sum==target){  //basecase
       // if(){
            result.push_back(sum);
       // } // at the idx=n sum=all elements sum and i  put it 
    return ;                  //into the result array as a element of result array 
    }
    f(array,n,idx+1,sum+array[idx],result,target);//pick the ith element
    f(array,n,idx+1,sum,result,target);//do not pick the ith element
}
int main(){
    int n; cin>>n; int array[n]; vector<int> result; int sum=0;
    int target; cin>>target;
    for(int i=0; i<n; i++){cin>>array[i];}
    f(array,n,0,sum,result,target);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }    return 0;  }