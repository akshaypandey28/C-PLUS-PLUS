#include<bits/stdc++.h>
using namespace std;
int solve(string A) {
    int n=A.size();
    int l=n/2; //for left
    int r=n/2; //for right
    if(n%2==0) l--;
    while(l>=0){
        if(A[l]==A[r]){ //basically at some point l and r at same point and after that traversing left and 
        //right tells about the count that is answer
            l--;
            r++;
        }
        else{ //this is use for making l and r at same point that is same index
            r--;
        }
    }
    return (n-r);
}
int main(){
    string str; cin>>str;
    cout<<"the no. of characters needed to make palindromic is "<<solve(str)<<endl;
return 0;
}