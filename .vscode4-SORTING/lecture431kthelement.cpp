#include<bits/stdc++.h>
using namespace std;
int partition(int *array,int l,int r){
    int pivot=array[r];  int i=l;   // for swapping with pivot element
    for(int j=l; j<r; j++){
        if(array[j]<pivot){
        swap(array[j],array[i]);
       i++;  }   }
    swap(array[i],array[r]);
    return i; }   //pivot element index
int kthsmallest(int *array,int l,int r,int k){
    if(k>0 && k<=r-l+1){
        int pos=partition(array,l,r);
    if(pos-l==k-1){
        return array[pos];   }
    else if(pos-l>k-1){
        int element=kthsmallest(array,l,pos-1,k); 
        return element;   }
    else{                                        //(pos-l<k-1)
        int element=kthsmallest(array,pos+1,r,k-(pos-l+1));
        return element;    }
    }
    return INT32_MAX;    }
int main(){
    int n; cin>>n; int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];  }   int k; cin>>k;
   int answer= kthsmallest(array,0,n-1,k);     
   cout<<"KTH ELEMENT IS "<<answer<<endl;
return 0;  }