#include<stdio.h>
int main(){
    int n,m; scanf("%d %d",&n,&m); //size of both the array
    int arr1[n],arr2[m]; //declaration of the array
    int i=0;
    for(i=0; i<n; i++) scanf("%d",&arr1[i]); //inputs elements of the array
    for(i=0; i<m; i++) scanf("%d",&arr2[i]); //inputs elements of the array
    printf("\n");
   
    int arr[m+n]; //array used for merging
    for(i=0; i<m; i++) arr[i]=arr2[i]; //copying in the array
    printf("%d \n",i);
    int j=0;
    for(j=0; j<n; j++) arr[i++]=arr1[j];  //copying in the array
    for(i=0; i<(m+n); i++) printf("%d ",arr[i]); //printing of the merged array
return 0;
}