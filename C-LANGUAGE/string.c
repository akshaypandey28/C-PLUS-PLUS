#include<stdio.h>
#include<conio.h>
int main(){
    int array[5]={1,2,3,4,5};
    for(int ele:array){
        printf("%d ",ele);
    }
    return 0;
}