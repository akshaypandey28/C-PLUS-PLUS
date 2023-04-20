#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    int n;
    //printf("enter the size of the array\n");
    scanf("%d",&n);
    int arr[n],b[n],c[n],count=-1,counttwo=-1;
    printf("enter the elements of the array");
    for(int i=0;i<=n-1;i++){
    scanf("%d",&arr[i]);}
    for(int i=0;i<=n-1;i++){
        if(arr[i]%2==0){
            count++;
            b[count]=arr[i];  }
        else{
            counttwo++;
            c[counttwo]=arr[i];  }
    }
    //printf("the odd numbers in the array are\n");
    for(int i=0;i<=count;i++){
    printf("%d ",b[i]);}
    printf("\n");
    //printf("the odd number in the array are\n");
    for(int i=0;i<=counttwo;i++){
    printf("%d ",c[i]);}
}