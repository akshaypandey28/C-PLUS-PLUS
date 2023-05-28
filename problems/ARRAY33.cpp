/* Q3 - ​Given an integer array arr consisting of 0’s and 1’s only, return the max length of
sequence which contains equal numbers of 0 and 1. */
#include<bits/stdc++.h>  //wrong code
using namespace std;
int main(){
   int n; cin>>n; vector<int> v(n);
   for(int i=0; i<v.size(); i++){
    cin>>v[i];
   }
   for(int i=0; i<v.size(); i++){
    if(v[i]==0){
        v[i]=-1; }
    }
    int length;
    for(int i=0; i<v.size(); i++){
        int sum=0;
        for(int j=i; i<v.size(); j++){
            sum=sum+v[j];   }
        if(sum==0){
            length=v.size()-i;
            break; }

    }
     cout<<"MAXIMUM ZEROES AND ONES IS "<<length<<endl;
return 0;
}