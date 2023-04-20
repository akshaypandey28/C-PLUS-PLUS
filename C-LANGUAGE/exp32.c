#include<stdio.h>
#include<conio.h>
struct info{
    char name[20];
    int roll;
    int class;
};
struct info fun(struct info ap);
int main()
{
    struct info ap1,ap4;
    printf("ENTER NAME OF STUDENT \n");
    scanf("%s",&ap1.name);
    printf("ENTER ROLL NUMBER OF STUDENT\n");
    scanf("%d",&ap1.roll);
    printf("ENTER CLASS OF STUDENT\n");
    scanf("%d",&ap1.class);
    ap4=fun(ap1);
    printf("%s\n",ap4.name);
    printf("%d\n",ap4.roll);
    printf("%d\n",ap4.class);
    getch();
    return 0;
}

struct info fun(struct info ap2)
{
    printf("\nreplacing roll number of the student as 15 and class as 10 and returning the information to the main\n");
    ap2.roll=15;
    ap2.class=10;
    return ap2;
}