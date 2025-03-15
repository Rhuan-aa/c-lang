#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int max;
    int top_index;
    int* vet;
} t_stack;


t_stack* create_stack(int max)
{
    t_stack* stack = (t_stack*) malloc(sizeof(t_stack));
    
    stack->max = max;
    stack->top_index = -1;
    stack->vet = (int*) malloc(sizeof(int) * max);
    
    return stack;
}

int is_full(t_stack* stack) 
{
    return stack->top_index >= stack->max-1;
}

int is_empty(t_stack* stack) 
{
    return stack->top_index <= -1;
}

int push(t_stack* stack, int element)
{
    if (is_full(stack)) return 0;

    stack->vet[++stack->top_index] = element;
    
    return 1;
}

int pop(t_stack* stack, int* element)
{
    if (is_empty(stack)) return 0;
    
    *element = stack->vet[stack->top_index--];

    return 1;
}

int top(t_stack* stack, int* element) 
{
    if (is_empty(stack)) return 0;

    *element = stack->vet[stack->top_index];

    return 1;
}

void destroy(t_stack* stack) 
{
    free(stack->vet);
    free(stack);
}


int main(int argc, char const *argv[])
{
    
    return 0;
}
