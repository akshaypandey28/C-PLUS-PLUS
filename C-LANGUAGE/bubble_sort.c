#include<stdio.h>
int main(){
    printf("The size of the array ");

    int n; scanf("%d",&n); //size of the array
    int arr[n];

    int i=0,j=0;

    printf("The elements of the array is ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(arr[j+1]<arr[j]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("Array after sorting is ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}