#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define INF INT_MAX

typedef struct _adj_node {
    int dest;
    int weight;
    struct _adj_node* next;
} t_adj_node;

typedef struct {
    t_adj_node** adj_list;
    int num_vertices;
} t_graph;

t_graph* create_graph(int num_vertices) {
    t_graph* graph =  (t_graph*) malloc(sizeof(t_graph));
    graph->adj_list = (t_adj_node**) malloc(num_vertices * sizeof(t_adj_node*));
    graph->num_vertices = num_vertices;

    for (int i = 0; i < num_vertices; i++) {
        graph->adj_list[i] = NULL;
    }
    
    return graph;
}

void insert_edge(t_graph* graph, int src, int dest, int weight) {
    t_adj_node* new_node = (t_adj_node*) malloc(sizeof(t_adj_node));
    new_node->dest = dest;
    new_node->weight = weight;
    new_node->next = graph->adj_list[src];
    graph->adj_list[src] = new_node;
}

void print_graph(t_graph* graph) {
    for (int i = 0; i < graph->num_vertices; i++) {
        printf("Vertice %d:", i);
        t_adj_node* temp = graph->adj_list[i];
        while (temp) {
            printf(" -> %d(w=%d)", temp->dest, temp->weight);
            temp = temp->next;
        }
        printf("\n");
    }
}

typedef struct {
    int* data;
    int front, rear, size, capacity;
} Queue;

Queue* create_queue(int capacity) {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->data = (int*)malloc(capacity * sizeof(int));
    q->front = 0;
    q->rear = -1;
    q->size = 0;
    q->capacity = capacity;
    return q;
}

void enqueue(Queue* q, int value) {
    if (q->size == q->capacity) return;
    q->rear = (q->rear + 1) % q->capacity;
    q->data[q->rear] = value;
    q->size++;
}

int dequeue(Queue* q) {
    if (q->size == 0) return -1;
    int value = q->data[q->front];
    q->front = (q->front + 1) % q->capacity;
    q->size--;
    return value;
}

int is_empty_queue(Queue* q) {
    return q->size == 0;
}

void free_queue(Queue* q) {
    free(q->data);
    free(q);
}

// Pilha para DFS
typedef struct {
    int* data;
    int top;
    int capacity;
} Stack;

Stack* create_stack(int capacity) {
    Stack* s = (Stack*)malloc(sizeof(Stack));
    s->data = (int*)malloc(capacity * sizeof(int));
    s->top = -1;
    s->capacity = capacity;
    return s;
}

void push(Stack* s, int value) {
    if (s->top == s->capacity - 1) return;
    s->data[++s->top] = value;
}

int pop(Stack* s) {
    if (s->top == -1) return -1;
    return s->data[s->top--];
}

int is_empty_stack(Stack* s) {
    return s->top == -1;
}

void free_stack(Stack* s) {
    free(s->data);
    free(s);
}

// BFS
void bfs(t_graph* graph, int start) {
    int* visited = (int*)calloc(graph->num_vertices, sizeof(int));
    Queue* q = create_queue(graph->num_vertices);

    printf("BFS: ");
    enqueue(q, start);
    visited[start] = 1;

    while (!is_empty_queue(q)) {
        int v = dequeue(q);
        printf("%d ", v);

        t_adj_node* temp = graph->adj_list[v];
        while (temp) {
            if (!visited[temp->dest]) {
                enqueue(q, temp->dest);
                visited[temp->dest] = 1;
            }
            temp = temp->next;
        }
    }
    printf("\n");
    free(visited);
    free_queue(q);
}

// DFS
void dfs(t_graph* graph, int start) {
    int* visited = (int*)calloc(graph->num_vertices, sizeof(int));
    Stack* s = create_stack(graph->num_vertices);

    printf("DFS: ");
    push(s, start);

    while (!is_empty_stack(s)) {
        int v = pop(s);
        if (!visited[v]) {
            printf("%d ", v);
            visited[v] = 1;
            t_adj_node* temp = graph->adj_list[v];
            // Para visitar na ordem correta, empilhe os vizinhos em ordem reversa
            int neighbors[graph->num_vertices];
            int count = 0;
            while (temp) {
                neighbors[count++] = temp->dest;
                temp = temp->next;
            }
            for (int i = count - 1; i >= 0; i--) {
                if (!visited[neighbors[i]]) {
                    push(s, neighbors[i]);
                }
            }
        }
    }
    printf("\n");
    free(visited);
    free_stack(s);
}

int main() {
    int matriz[5][5] = {
        {0, 2, 0, 1, 0},
        {0, 0, 3, 0, 0},
        {4, 0, 0, 0, 5},
        {0, 0, 2, 0, 0},
        {0, 1, 0, 0, 0}
    };
    int num_vertices = 5;

    t_graph* graph = create_graph(num_vertices);

    // Inserir arestas a partir da matriz
    for (int i = 0; i < num_vertices; i++) {
        for (int j = 0; j < num_vertices; j++) {
            if (matriz[i][j] != 0) {
                insert_edge(graph, i, j, matriz[i][j]);
            }
        }
    }

    // Printar o grafo
    print_graph(graph);

    // Executar BFS e DFS a partir do vértice 0
    bfs(graph, 0);
    dfs(graph, 0);

    // Liberação de memória
    for (int i = 0; i < num_vertices; i++) {
        t_adj_node* curr = graph->adj_list[i];
        while (curr) {
            t_adj_node* temp = curr;
            curr = curr->next;
            free(temp);
        }
    }
    free(graph->adj_list);
    free(graph);

    return 0;
}