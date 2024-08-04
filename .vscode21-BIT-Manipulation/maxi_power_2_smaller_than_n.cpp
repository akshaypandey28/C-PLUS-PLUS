#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long int nthPosition(long long int n){
        // code here
        int count=0;
        while(n!=1){
            n/=2;
            count++;
        }
        long long int ans=1<<count; //using n<<x = n*(2^x) left shift
        return ans;
    }
};
class Solution {
  public:
    long long int nthPosition(long long int n){
        long long int temp;
        while(n!=0){
            temp=n;
            n=n&(n-1); 
        }
        return temp;
    }
};
int max_power_2(int n){
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    //n gets increased after these 5 lines
    //after this final n = 2^5-1
    //so answer is (2^5 -1 +1)/2; 

    return (n+1)>>1; //(n+1)/2
}
int main(){
return 0;
}