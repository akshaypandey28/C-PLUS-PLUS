#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int a=4;// scanf("%d",&a);
    int n=(a*8);
    printf("UNSIGNED RANGE %0.0f\n",pow(2,n)-1);
    printf("SIGNED RANGE FOR NEGATIVE -%0.0f\n",pow(2,n-1));
    printf("SIGNED RANGE FOR POSITVE  %0.0f",pow(2,n-1)-1);
return 0;
}