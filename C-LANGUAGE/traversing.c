#include<stdio.h>
int main(){
    printf("Number of the elements in the array ");
    int n; scanf("%d",&n); // size of the array
    int arr[n]; // declaration of the array
    printf("Elements in the array are by taking input are ");
    int i=0;
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements of the array are ");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
return 0;
}