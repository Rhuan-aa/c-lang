#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start;
    int end;
    int size;
    int* vector;
} t_queue;


t_queue* create(int size) {
    t_queue* queue = (t_queue*) malloc(sizeof(t_queue));
    queue->vector = (int*) malloc(sizeof(int) * size);
    queue->size = size;
    queue->start = 0;
    queue->end = -1;
    return queue;
}

int is_empty(t_queue* queue) {
    return queue->end == -1;
}

int is_full(t_queue* queue) {
    return queue->end == queue->size-1;
}

int size(t_queue* queue) {
    return queue->end+1;
}

void in(t_queue* queue, int value) {
    if (is_full(queue)) {
        return;
    }
    
    queue->vector[++queue->end] = value;
}

void out(t_queue* queue, int* value) {
    if (is_empty(queue)) {
        return;
    }
    *value = queue->vector[queue->start];
    if (size(queue) > 1) {
        for (int i = 0; i < size(queue) - 1; i++){
            queue->vector[i] = queue->vector[i+1];
        }
    }
    queue->end--;
}

void print_queue(t_queue* queue) {
    if (is_empty(queue)) {
        return;
    }
    
    for (int i = 0; i < size(queue); i++) {
        printf("%d ", queue->vector[i]);
    }
    printf("\n");

}

void destroy(t_queue* queue) {
    free(queue->vector);
    free(queue);
}

int main(int argc, char const *argv[])
{
    t_queue* queue = create(10);
    in(queue, 10);
    in(queue, 20);
    in(queue, 30);
    in(queue, 40);
    in(queue, 50);
    in(queue, 60);
    in(queue, 70);
    in(queue, 80);
    in(queue, 90);

    printf("Original Queue: \n");
    print_queue(queue);

    int value = 0;
    out(queue, &value);
    printf("%d\n", value);

    printf("Queue Post-Out: \n");
    print_queue(queue);

    return 0;
}
