#include<stdio.h>
int main(){
    printf("The row size and column size of the 2D-array mat1 is ");
    int r1,c1; scanf("%d %d",&r1,&c1); //size of the array

    printf("The row size and column size of the 2D-array mat2 is ");

    int r2,c2; scanf("%d %d",&r2,&c2); //size of the array

    int mat1[r1][c1],mat2[r2][c2]; //declaration of the two 2D-array

    int i=0;
    int j=0;
    int k=0;
    int value=0;

    int result[r1][c2];//to store the resultant of the two matrix multiplication

    printf("The elements of the mat1 are ");
    for(i=0; i<r1; i++)
    { //taking inputs of the mat1
        for(j=0; j<c1; j++)
        {
            scanf("%d",&mat1[i][j]);
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("The elements of the mat2 are ");
    for(i=0; i<r2; i++)
    { //taking inputs of the mat2
        for(j=0; j<c2; j++)
        {
            scanf("%d",&mat2[i][j]);
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    if(c1!=r2){
        printf("Multiplication is not possible");
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            value=0;
            for(k=0; k<r2; k++)
            {
                value+=mat1[i][k]*mat2[k][j];
            }
            //printf("%d ",value);
            result[i][j]=value;
        }
    }

    printf("The matrix multiplication of the two mat1 and mat2 are \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    
return 0;
}