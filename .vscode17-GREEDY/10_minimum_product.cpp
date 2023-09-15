//find minimum product subset
//leetcode 
#include<bits/stdc++.h>
using namespace std;
int min_product(vector<int> &arr){
    int zero=0,neg=0,pos=0;
    int pro_neg=1,pro_pos=1;
    int max_neg=INT_MIN;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]<0) {
            neg++;
            pro_neg*=arr[i];
            max_neg=max(max_neg,arr[i]);
        }    
        else if(arr[i]==0) zero++;
        else{
            pos++;
            pro_pos*=arr[i];
        }
    }
    if(neg==0){
        if(zero>0) return 0;
        else {
            //sort(arr.begin(),arr.end());
            auto it =min_element(arr.begin(),arr.end()); //this will return a pointer
            return *it;
        }
    }
    else if(neg%2!=0){ //when neg is odd
        return pro_neg*pro_pos;
    }
    else{ //when neg is even
        return (pro_neg*pro_pos)/max_neg;
    }
    
}
int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    cout<<"the minimum product is "<<min_product(v)<<endl;
return 0;
}