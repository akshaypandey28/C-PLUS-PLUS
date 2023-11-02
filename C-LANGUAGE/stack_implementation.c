#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>
#include<string.h>
struct Stack{
    char *arr;
    int top;
    int capacity;
};
struct Stack* declaration(int c){
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity=c;
    stack->top=-1;
    stack->arr=(char *)malloc(stack->capacity * sizeof(char));
    return stack;
}
int isFull(struct Stack* stack) 
{ 
    return stack->top == stack->capacity - 1; 
}
int isEmpty(struct Stack* stack) 
{ 
    return stack->top == -1; 
}
void push(struct Stack* stack, char value){
    if(isFull(stack)){
        return ;
    }
    stack->top++;
    stack->arr[stack->top]=value;
}
char pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow");
        return '\0';
    }
    char at_the_top = stack->arr[stack->top];
    stack->top--;
    return at_the_top;
} 
int getTop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) {
        printf("Stack underflow");
    }
    return stack->arr[stack->top]; 
} 
int size(struct Stack* stack){
    return stack->top+1;
}
int isOperator(char x){
    switch(x){
        case '+':
        case '-':
        case '*':
        case '/':
        return 0;
    }
    return 1;
}
void postfix_to_prefix(struct Stack* stack,char post[]){
    int length = strlen(post);
    for(int i=0; i<length; i++){
        char ch=post[i];
        if(isOperator(ch)){
            push(stack , ch);
        }
        else{
            // char op2=getTop(stack);
            // pop(stack);
            // char op1=getTop(stack);
            // pop(stack);
            // // char res=post[i]+op1+op2;
            // // push(stack,res);
            // char res[] = {post[i], '\0'}; // Create a string with the current character
            // strcat(res, &op1); // Concatenate op1
            // strcat(res, &op2); // Concatenate op2
            // push(stack, res);
            char op2 = pop(stack);
            char op1 = pop(stack);
            char* res = (char*)malloc(1 * sizeof(char));
            res = ch;
            strcat(res,op1);
            strcat(res,op2);
           // res[1] = op1;
            //res[2] = op2;
            push(stack, res);

        }
    }
    printf("%s",stack->arr[stack->top]);
}
int main(){
    struct Stack* stack = declaration(100);
    char post[7];
    fgets(post, sizeof(post), stdin);
    printf("%s\n", post);
    postfix_to_prefix(stack,post);

return 0;
}