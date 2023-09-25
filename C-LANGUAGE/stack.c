#include<stdio.h>
#include<stdlib.h>

int n, top = -1, *stack; //here stack is an array which stores the value

void push(int x){
	if(top==n) {
        printf("OVERFLOW");
    }
    top++;
	stack[top]=x;
}

int pop(){
	if(top==-1) {
        printf("UNDERFLOW");
        return -1;
    }
	int value=stack[top];
    top--;
    return value;
}
void isEmpty(){
    if(top==-1){
        printf("Stack is empty");
    }
    else {
        printf("Stack is not empty");
    }
}
int getTop(){
	if(top==-1) {
        printf("UNDERFLOW");
        return -1;
    }
	return stack[top];
}
int size(){
    return top+1;
}
void display(){
	for(int i=top ; i>=0 ; i--) printf("%d ",stack[i]);
	printf("\n\n");
}

int main(){
	
	n = 10;
	
	printf("Initializing the stack with size 10\n\n");
	
	stack = (int*)malloc(n*sizeof(int));
	
	printf("Pushing elements into the stack\n 1\n 2\n 3\n\n");
	
	push(1);
	push(2);
	push(3);
	
	printf("Displaying elements of the stack -\n");
	
	display();
	
	printf("The top of the stack is= %d\n\n",getTop());
	
	printf("Pop the top of the stack = %d\n\n",pop());
	
	printf("Pop the top of the stack = %d\n\n",pop());
	
	printf("Displaying elements of the stack are-\n");
	
	display();

    printf("The size of the stack is %d\n\n",size());

    isEmpty();
	
	return 0;
}