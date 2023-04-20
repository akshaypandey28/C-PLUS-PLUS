#include<stdio.h>
void countsort(int *array,int n){
     int max=-2000;
    for(int i=0; i<n; i++){  // find the max element
        if(array[i]>max){
            max=array[i];
        }  }
    int frequency[max+1];
    for(int i=0; i<n; i++){ // create the freq array
        frequency[array[i]]++;   }
    for(int i=1; i<=max; i++){  // calculate the cumulative frequency
        frequency[i]=frequency[i]+frequency[i-1];    }
    int ans[n];
    for(int i=n-1; i>=0; i--){ // calculate the sorted array
        ans[--frequency[array[i]]]=array[i];   }
    for(int i=0; i<n; i++){ // copy back the ans array to original array that is v
        array[i]=ans[i];   }      }
int main(){
    int n; scanf("%d",&n); int array[n];
    for(int i=0; i<n; i++){
        scanf("%d ",&array[i]);  }
    countsort(array,n);
    for(int i=0; i<n; i++){
        printf("%d ",array[i]);   }     return 0;  }