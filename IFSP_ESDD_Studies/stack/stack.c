#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int size;
    int stack_top;
    int* vector;
} t_stack;

t_stack* create(int size){
    t_stack* stack = (t_stack*) malloc(sizeof(t_stack));
    stack->vector = (int*) malloc(sizeof(int) * size);
    stack->size = size;
    stack->stack_top = -1;
    
    return stack;
}

int is_empty(t_stack* stack) {
    return stack->stack_top == -1;
}

int is_full(t_stack* stack) {
    return stack->stack_top == stack->size - 1;
}

void push(t_stack* stack, int value) {
    if (is_full(stack)) {
        printf("A pilha esta cheia! ");
        return;
    }
    
    stack->vector[++stack->stack_top] = value;
}

void pop(t_stack* stack, int* value) {
    if (is_empty(stack)) {
        printf("A pilha esta vazia! ");
        return;
    }
    
    *value = stack->vector[stack->stack_top--];
}

void top(t_stack* stack, int* value) {
    if (is_empty(stack)) {
        printf("A pilha esta vazia! ");
        return;
    }
    
    *value = stack->vector[stack->stack_top];
}

void print_stack(t_stack* stack) {
    if (is_empty(stack)) {
        return;
    }
    
    for (int i = 0; i <= stack->stack_top; i++)
    {
        printf("%d ", stack->vector[i]);
    }
    printf("\n");
}

void clear(t_stack* stack) {
    stack->stack_top = -1;
}

void destroy(t_stack* stack) {
    free(stack->vector);
    free(stack);
}

int main(int argc, char const *argv[]) {
    t_stack* stack = create(10);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    push(stack, 50);
    push(stack, 60);
    push(stack, 70);
    push(stack, 80);
    push(stack, 90);
    push(stack, 100);

    printf("Stack Original: \n");
    print_stack(stack);

    int value = 0;
    pop(stack, &value);
    printf("Poped Value = %d \n", value);

    printf("Stack apos Pop: \n");
    print_stack(stack);

    int value2 = 0;
    top(stack, &value2);
    printf("Top Value = %d \n", value2);

    clear(stack);
    push(stack, 12);

    printf("Stack apos Clear: \n");
    print_stack(stack);

    destroy(stack);

    return 0;
}
