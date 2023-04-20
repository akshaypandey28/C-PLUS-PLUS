#include<stdio.h>
int function(int array[], int n){
    int maximum=array[0]; int minimum=array[0];// printf("%p \n",&array[0]);
    for(int i=1; i<n; i++){
        if(maximum<array[i]){
            maximum=array[i];
        }
        if(minimum>array[i]){
            minimum=array[i];
        }
    }
    printf("MAXIMUM IS %d \n",maximum);
    printf("MINIMUM IS %d \n",minimum);
    }
int main(){
    int n; scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
   // printf("%p \n",&array[0]);
    function(array,n);
    
}