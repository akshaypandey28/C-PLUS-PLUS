#include<stdio.h>
#include<conio.h>
void bubblesorting(int array[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(array[j]>array[j+1]){
                int temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
}
int main(){
    int n; scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    bubblesorting(array,n);
    printf("THE SORTED ARRAY IS ");
    for(int i=0; i<n; i++){
        printf("%d ",array[i]);
    }
    
}