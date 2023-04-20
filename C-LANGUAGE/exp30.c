#include<stdio.h>
struct  studentdata{
    int roll;  char name;   float marks;
};
union marks{
    float average;    float percentage;
};
int main(){
    struct studentdata a;
    union marks t;
    printf("ENTER ROLL NO. ");
    scanf("%d",&a.roll); printf("\n");

    printf("ENTER NAME OF STUDENT ");
    scanf("%s",&a.name); printf("\n");

    printf("ENTER MARKS OF STUDENT ");
    scanf("%f",&a.marks); printf("\n");

    printf("ENTER AVERAGE MARKS OF ALL ");
    scanf("%f",&t.average); printf("\n");

    printf("ENTER PERCENTAGE ");
    scanf("%f",&t.percentage);
return 0;
}