#include<stdio.h>
void delete_(int *arr,int n,int idx){ //function used for deleting the array
    int i=0;
    while(i!=idx-1){
        i++;
    }
    int temp=arr[i+1];
    for(; i<n-1; i++){
        arr[i]=arr[i+1];
    }
}
void insert_(int *arr,int n,int idx,int value){ //function used for the insertion
    int i=0;
    while(i!=idx-1){
        i++;
    }
    int temp=arr[i];
    int a=temp;
    arr[i]=value; i++;
    for(; i<n; i++){
        a=arr[i];
        arr[i]=temp;
        temp=a;
    }
}
int main(){
    int n; scanf("%d",&n); //size of the array
    int i=0;
    int arr[n]; //declaration of the array

    for(i=0; i<n; i++) scanf("%d",&arr[i]);  //input elements of the array

    int idx; scanf("%d",&idx);

    delete_(arr,n,idx); //function call for the deletion

    for(i=0; i<n-1; i++) printf("%d ",arr[i]); //printing of the array

    printf("\n"); 
    int value; scanf("%d",&value); //value that has to be inserted

    insert_(arr,n,idx,value); //function call for the insertion 
    for(i=0; i<n; i++) printf("%d ",arr[i]); //printing of the resultant array
return 0;
}