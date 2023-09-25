#include<stdio.h>
#include<string.h>
int main(){
    int n; scanf("%d",&n);
    char arr[n];
    for(int i=0; i<n; i++) scanf("%c",&arr[i]);
    char copy[n];
    for(int i=0; i<n; i++) printf("%c",arr[i]);
    for(int i=0; i<n; i++) {
        printf("%c",arr[n-i-1]);
        copy[i]=arr[n-1-i];
        //printf("%c",copy[i]);
    }
    int count=0;
    for(int i=0; i<n; i++){
        if(copy[i]==arr[i]) count++;
    }
    printf("The answer is %d",count);
return 0;
}