#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &v2,int target){
    int lo=0,hi=v2.size()-1;
    while(lo<=hi){
        int mid=lo + (hi-lo)/2;
        if(v2[mid]==target){
            return v2[mid];
        }
        else if(v2[mid]<target){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return 0;
}
int commonElementsSum(vector<int> &v1,vector<int> &v2){
    int sum=0;
    for(int i=0; i<v1.size(); i++){
        sum+=binarySearch(v2,v1[i]);
    }
    return sum;
}
int main(){
    int m,n; cin>>m>>n;
    vector<int> v1(m);
    vector<int> v2(n);
    for(int i=0; i<m; i++){
        cin>>v1[i];
    }
    for(int i=0; i<m; i++){
        cin>>v2[i];
    }
    sort(v2.begin(),v2.end());
    cout<<"common elements sum is "<<commonElementsSum(v1,v2)<<endl;
return 0;
}