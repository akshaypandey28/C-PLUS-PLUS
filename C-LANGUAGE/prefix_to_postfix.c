#include<stdio.h>

#include<string.h>
#include<stdlib.h>
# define MAX 20
char str[MAX],stack[MAX];
int top=-1;
void push(char c)
{
    top++;
    stack[top]=c;
}
char pop()
{
   return stack[top--];
}
void prefix_to_postfix(){
    int n,i,j=0;
    char c[20];  //used for storing the operand that is a,b,c,d, etc
    char op1; //only for removing @
    printf("Enter the prefix expression :");
    fgets(str, MAX, stdin); //used for taking input in string form 
    n=strlen(str); //length of the prefix expression 
    printf("\n");

    printf("Postfix is : ");
    for(i=0; i<n; i++){
        if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/'){
            push(str[i]); //push operators in the stack
        }
        else{
            c[j]=str[i]; //storing the operand
            j++;
            while(top!=-1 && stack[top]=='@'){
                op1=pop(); //for removing @
                c[j]=pop();
                j++;
            }
            push('@'); //learn this line 
        }
    }
    c[j]='\0'; //learn this line 
    printf("%s",c);
}
int main(){
    prefix_to_postfix();
    return 0;
}