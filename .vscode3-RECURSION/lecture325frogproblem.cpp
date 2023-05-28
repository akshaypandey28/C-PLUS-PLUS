#include<bits/stdc++.h>   //frog problem
using namespace std;
int f(int *heights,int n,int idx){
    if(idx==n-1){  //base case
    return 0;
    }
    if(idx==n-2){  
    return f(heights,n,idx+1) +abs(heights[idx]-heights[idx+1]);
    }
    int ans=min(  f(heights,n,idx+1) + abs(heights[idx]-heights[idx+1]) , 
                  f(heights,n,idx+2) + abs(heights[idx]-heights[idx+2])   );
    return ans;
}
int main(){
    int array[]={10,30,40,20}; int n=4; int idx=0;
    int result=f(array,n,idx);
    cout<<"THE MINIMUM COST OF JUMPING IS "<<result<<endl;
return 0;
}