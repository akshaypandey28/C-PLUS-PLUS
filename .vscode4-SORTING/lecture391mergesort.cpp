#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int l,int mid, int r){
    int an=mid+1-l;   int bn=r-mid;
    int a[an];    int b[bn];  //create 2 temporary array
    for(int i=0; i<an; i++){
        a[i]=arr[l+i];   }
    for(int j=0; j<bn; j++){
        b[j]=arr[mid+1+j];  }
    int i=0; // initial index of first subarray
    int j=0; // initial index of second subarray
    int k=l; // initial index of merged subarray
    while(i<an && j<bn){
        if(a[i]<b[j]){
            arr[k]=a[i]; k++; i++;   }
        else{ 
            arr[k]=b[j]; k++; j++;   }
    }
    while(i<an){ arr[k]=a[i]; k++; i++; } // if only a array has minimum element value so for the end of the array
    while(j<bn){ arr[k]=b[j]; k++; j++; } // if only a array has minimum element value so for the end of the array
}
void mergesort(int *arr,int l,int r){
    if(l>=r){  return ;  } //base case
    int mid=(l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr, l, mid, r);
}
int main(){
    int arr[]={10,24,28,6,34,18,38,44};
    int n=8;// length of array
    mergesort(arr,0,n-1);  
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
return 0;
}