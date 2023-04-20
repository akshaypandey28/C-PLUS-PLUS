#include <stdio.h>
#include<conio.h>
typedef struct Comp
{
    float real;
    float imag;
} comp;

void fun(comp c1, comp c2, comp *sum);

int main()
{
    comp c1, c2, sum;

    printf("info about first complex number\n");
    printf("Enter real part\n");
    scanf("%f", &c1.real);
    printf("Enter imaginary part\n");
    scanf("%f", &c1.imag);
    printf("info about first complex number\n");
    printf("Enter real part\n");
    scanf("%f", &c2.real);
    printf("Enter imaginary part\n");
    scanf("%f", &c2.imag);
    fun(c1, c2, &sum);
    printf("\nsum.real = %.1f\n", sum.real);
    printf("sum.imag = %.1f", sum.imag);
    getch();
    return 0;
}
void fun(comp c1, comp c2, comp *sum)
{
    sum->real = c1.real + c2.real;
    sum->imag = c1.imag + c2.imag;
}