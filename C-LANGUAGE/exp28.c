#include<stdio.h>
int main(){
    int n=2;
    int arr1[2]={9,2};//array 1
    int arr2[2]={99,4};//array 2
    int arr3[4];
    //code for merging both the array
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0,k=n;i<n;i++,k++){
      arr3[k]=arr2[i];
    }
    printf("\n");
    //bubble sort for descending order 
     for(int i=0;i<2*n;i++){
        for(int k=0;k<(2*n-1);k++){
            if(arr3[k]<arr3[k+1]){
                int temp;
                temp=arr3[k];
                arr3[k]=arr3[k+1];
                arr3[k+1]=temp;
            }
        }
    }
    for(int i=0;i<2*n;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
}