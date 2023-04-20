#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n; scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    int arrayeven[n]; int j=0;
    int arrayodd[n]; int k=0;
    for(int i=0; i<n; i++){
        if(array[i]%2==0){
            arrayeven[j++]=array[i];
        }
        else{
            arrayodd[k++]=array[i];
        }
    }
    /* int evensize=sizeof(arrayeven)/sizeof(arrayeven[0]); printf("%d\n",evensize);
    int oddsize=sizeof(arrayodd)/sizeof(arrayodd[0]); printf("%d\n",evensize); */
    for(int i=0; i<j; i++){
        printf("%d ",arrayeven[i]);
    } printf("\n");
    for(int i=0; i<k; i++){
        printf("%d ",arrayodd[i]);
    }
return 0;
}