#include<stdio.h>
int main(){
    printf("The size of the array is ");
    int n; scanf("%d",&n); //size of the array
    int i=0,j=0;
    int arr[n];
    printf("The elements of the array are ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }

    printf("\n");
    
    for(i=0; i<n-1; i++)
    {
        int min_index=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[min_index]>arr[j]){
                min_index=j;
            }
        }
        if(min_index!=i){
            int temp=arr[min_index];
            arr[min_index]=arr[i];
            arr[i]=temp;
        }
    }

    printf("Array after sorting is ");
    for(i=0; i<n; i++) printf("%d ",arr[i]);
return 0;
}