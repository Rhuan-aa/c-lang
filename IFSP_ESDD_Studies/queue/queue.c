#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int max;
    int size;
    int start;
    int end;
    int* vet;
} t_queue;

t_queue* create_queue(int max)
{
    t_queue* queue = (t_queue*) malloc(sizeof(t_queue));
    queue->max = max;
    queue->size = 0;
    queue->start = 0;
    queue->end = 0;
    queue->vet = (int*) malloc(sizeof(int) * max);

    return queue;
}

int is_full(t_queue* queue)
{
    return queue->size >= queue->max-1;
}

int is_empty(t_queue* queue)
{
    return queue->size <= 0;
}

int in(t_queue* queue, int elem)
{
    if (is_full(queue)) return 0;

    queue->vet[queue->end] = elem;
    queue->size++;
    queue->end = (queue->end+1) % queue->max;
    
    return 1;
}

int out(t_queue* queue, int elem)
{
    if (is_empty(queue)) return 0;
    queue->start =(queue->start+1) % queue->max;
    queue->size--;
    
    return 1;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
