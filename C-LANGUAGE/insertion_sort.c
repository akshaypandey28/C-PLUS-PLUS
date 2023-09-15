//Name ->Akshay Kumar Pandey
//Roll NO.->2204009
#include<stdio.h>
int main(){
    printf("The size of the array ");
    int i=0;
    int n; scanf("%d",&n); //size of the array
    int arr[n]; //declaration of the array
    printf("The elements of the array ");
    for(i=0; i<n; i++) scanf("%d",&arr[i]); //taking inputs of the array
    //code for the insertion sort algorithm
    for(i=1; i<n; i++)
    {
        int current=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j]; //update at index j+1
            j--;
        }
        arr[j+1]=current;
    }
    printf("Array after sorting is ");
    for(i=0; i<n; i++) printf("%d ",arr[i]);
}