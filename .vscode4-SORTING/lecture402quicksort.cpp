#include<bits/stdc++.h>
using namespace std;
int partition(int *array,int first,int last){
    int pivot=array[last];
    int i=first-1; // for inserting elements <pivot
    int j=first; // finding the elements < pivot
    for(; j<last; j++){
        if(array[j]<pivot){
            i++;
            swap(array[i],array[j]);   }
    }
    swap(array[i+1],array[last]); //now i is pointing the last element < pivot correct position for pivot will be i+1
    return i+1;   }
void quicksort(int *array,int first,int last){
    if(first>=last){  //base case
        return;  }
    int pi=partition(array,first,last);

    quicksort(array,first,pi-1);
    
    quicksort(array,pi+1,last);   }
int main(){
    int array[]={20,12,35,16,18,30};    int n=sizeof(array)/sizeof(array[0]);
    quicksort(array,0,n-1);
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }cout<<endl;    return 0;   }