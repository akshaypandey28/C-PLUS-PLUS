#include<stdio.h>
int main(){
    printf("The size of the array ");

    int n; scanf("%d",&n); // size of the array

    int arr[n]; //declaration of the array
    
    int i=0;

    for(i=0; i<n; i++) scanf("%d",&arr[i]); //taking inputs in the array

    printf("The element to find in the array ");
    int element; scanf("%d",&element); //element to check in array

    char check='n';

    int lo=0,hi=n-1;

    while(lo<=hi){
        int mid= lo + (hi-lo)/2;
        if(arr[mid]==element){
            check='y';
            break;
        }
        else if(arr[mid]>element){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }

    if(check=='n') printf("Element is not present in the array");
    else printf("Element is present in the array");
return 0;
}