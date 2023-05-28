//calculate the square root
#include<bits/stdc++.h> 
#include<cmath>
using namespace std;
/* 
Time : O(square_root(x))
Space :O(1)
 */
int main(){
    int x; cin>>x;
    int ans=0;
    for(int i=1; i<=x; i++){ //linear search correct but some other  
        if(i*i <= x){  //approach can be done
            ans=i;
        }
        else{
            break;
        }
    }  
    cout<<"The Square root of x is "<<ans<<endl;
return 0;
}