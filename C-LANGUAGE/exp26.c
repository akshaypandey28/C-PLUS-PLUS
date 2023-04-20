#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n; scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    int copyarray[n]; int j=0;
    for(int i=n-1; i>=0; i--){
        copyarray[j++]=array[i];
    }
    for(int i=0; i<n; i++){
        printf("%d ",copyarray[i]);
    }
return 0;
}