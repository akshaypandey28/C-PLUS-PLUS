#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void calc(int n,int i){ //0 based indexing
        //get bit
        int left_shift=1<<i;
        int num_to_get_bit=n&left_shift;
        if(num_to_get_bit!=0) cout<<1<<" ";
        else cout << 0 << " ";
        
        //set bit
        
        cout<<(n|left_shift)<<" ";
        
        //clear bit
        
        int complement=~(left_shift);
        cout<<(n&complement);
    }
    void bitManipulation(int n, int i) {
        // your code here
        calc(n,--i);
        
    }
};
int main(){
return 0;
}