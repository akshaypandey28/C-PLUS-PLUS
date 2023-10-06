//Implement multiple stacks using a single array
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACKS 3   // Number of stacks
#define MAX_SIZE 100    // Total size of the array

typedef struct {
    int *arr;          // Pointer to the array
    int *top;          // Pointer to the top of the stack
    int stackSize;     // Size of each stack
} Stack;

// Function to initialize a stack
void initStack(Stack *stack, int size) {
    stack->arr = (int *)malloc(size * sizeof(int));  // Allocate memory for the array
    stack->top = stack->arr - 1;  // Initialize top pointer to -1 (empty stack)
    stack->stackSize = size;      // Set the size of the stack
}

// Function to push an element onto the stack
void push(Stack *stack, int stackNumber, int value) {
    if (stack->top - stack->arr >= (stackNumber * stack->stackSize) + stack->stackSize - 1) {
        printf("Stack %d overflow\n", stackNumber);  // Check for stack overflow
    } else {
        stack->top++;             // Move top pointer to the next position
        *(stack->top) = value;    // Store the value at the top of the stack
        printf("Pushed element %d into Stack %d\n", value, stackNumber);
    }
}

// Function to pop an element from the stack
int pop(Stack *stack, int stackNumber) {
    if (stack->top < stack->arr + stackNumber * stack->stackSize) {
        printf("Stack %d underflow\n", stackNumber);  // Check for stack underflow
        return -1;
    } else {
        int value = *(stack->top);  // Get the value from the top of the stack
        stack->top--;               // Move top pointer to the previous position (pop the element)
        printf("Popped element %d from Stack %d\n", value, stackNumber);
        return value;
    }
}

int main() {
    Stack stack;
    initStack(&stack, MAX_SIZE / MAX_STACKS);  // Initialize the stack

    // Push and pop elements from the stacks
    push(&stack, 0, 1);
    push(&stack, 1, 2);
    push(&stack, 2, 3);

    int poppedValue = pop(&stack, 0);
    if (poppedValue != -1) {
        printf("Popped value from Stack 0: %d\n", poppedValue);
    }

    poppedValue = pop(&stack, 1);
    if (poppedValue != -1) {
        printf("Popped value from Stack 1: %d\n", poppedValue);
    }

    poppedValue = pop(&stack, 2);
    if (poppedValue != -1) {
        printf("Popped value from Stack 2: %d\n", poppedValue);
    }

    free(stack.arr);  // Free the allocated memory
    return 0;
}
