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
    int sum=0; // initialization of a variable to find the sum of the array
    for(i=0; i<n; i++){
        sum+=arr[i];
    }
    printf("The sum of the array is %d",sum);
return 0;
}