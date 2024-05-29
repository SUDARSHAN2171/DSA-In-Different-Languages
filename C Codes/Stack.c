#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define the structure for the stack
typedef struct {
    int *elements;
    int size;
    int capacity;
} Stack;

// Initialize the stack with a certain capacity
void initStack(Stack *stack, int capacity) {
    stack->elements = (int *)malloc(capacity * sizeof(int));
    stack->size = 0;
    stack->capacity = capacity;
}

// Push: Adds an element to the top of the stack
void push(Stack *stack, int data) {
    if (stack->size == stack->capacity) {
        // Resize the stack if it is full
        stack->capacity *= 2;
        stack->elements = (int *)realloc(stack->elements, stack->capacity * sizeof(int));
    }
    stack->elements[stack->size++] = data;
}

// Pop: Removes and returns the element at the top of the stack
int pop(Stack *stack) {
    if (stack->size == 0) {
        printf("Stack is empty. Cannot pop.\n");
        return -1; // Indicating an error
    }
    return stack->elements[--stack->size];
}

// Peek: Returns the element at the top of the stack without removing it
int peek(Stack *stack) {
    if (stack->size == 0) {
        printf("Stack is empty. Cannot peek.\n");
        return -1; // Indicating an error
    }
    return stack->elements[stack->size - 1];
}

// Size: Returns the number of elements in the stack
int size(Stack *stack) {
    return stack->size;
}

// IsEmpty: Checks if the stack is empty
bool isEmpty(Stack *stack) {
    return stack->size == 0;
}

// Free the memory allocated for the stack
void freeStack(Stack *stack) {
    free(stack->elements);
}

int main() {
    Stack stack;
    initStack(&stack, 2); // Initial capacity of 2

    int choice, value;

    do {
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Size\n");
        printf("5. Is Empty\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                printf("Pushed %d onto the stack.\n", value);
                break;
            case 2:
                value = pop(&stack);
                if (value != -1) {
                    printf("Popped %d from the stack.\n", value);
                }
                break;
            case 3:
                value = peek(&stack);
                if (value != -1) {
                    printf("Top element is %d.\n", value);
                }
                break;
            case 4:
                printf("Current stack size: %d\n", size(&stack));
                break;
            case 5:
                printf("Is stack empty? %s\n", isEmpty(&stack) ? "Yes" : "No");
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    // Free the allocated memory
    freeStack(&stack);

    return 0;
}
