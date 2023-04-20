#include<stdio.h>
#include<conio.h>
struct akshay{
    char name[20];
    int roll;
    int class;  };
void fun(struct akshay ap){
    int rollnumber;
    rollnumber=ap.roll;
    printf("THE ROLL NUMBER IS %d",rollnumber);  }
int main(){
    struct akshay akp;
    printf("ENTER NAME OF STUDENT ");
    scanf("%s",&akp.name); printf("\n");
    printf("ENTER ROLL NUMBER OF STUDENT ");
    scanf("%d",&akp.roll); printf("\n");
    printf("ENTER CLASS OF STUDENT ");
    scanf("%d",&akp.class); printf("\n");
    fun(akp);
    return 0;
}

