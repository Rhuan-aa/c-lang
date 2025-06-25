#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar o grafo
typedef struct {
    int numVertices;
    int** adjMatrix; // Ponteiro para ponteiro para alocação dinâmica
} Graph;

// Função para criar um grafo
// Inicializa a matriz de adjacência com zeros usando alocação dinâmica
Graph* createGraph(int numVertices) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    if (graph == NULL) {
        perror("Erro ao alocar memória para o grafo");
        exit(EXIT_FAILURE);
    }
    graph->numVertices = numVertices;

    // Aloca memória para as linhas da matriz (array de ponteiros)
    graph->adjMatrix = (int**)malloc(numVertices * sizeof(int*));
    if (graph->adjMatrix == NULL) {
        perror("Erro ao alocar memória para as linhas da matriz");
        free(graph); // Libera o grafo se a alocação da matriz falhar
        exit(EXIT_FAILURE);
    }

    // Aloca memória para as colunas de cada linha e inicializa com 0
    for (int i = 0; i < numVertices; i++) {
        graph->adjMatrix[i] = (int*)malloc(numVertices * sizeof(int));
        if (graph->adjMatrix[i] == NULL) {
            perror("Erro ao alocar memória para as colunas da matriz");
            // Libera a memória já alocada para as linhas anteriores
            for (int k = 0; k < i; k++) {
                free(graph->adjMatrix[k]);
            }
            free(graph->adjMatrix);
            free(graph);
            exit(EXIT_FAILURE);
        }
        for (int j = 0; j < numVertices; j++) {
            graph->adjMatrix[i][j] = 0;
        }
    }
    return graph;
}

// Função para adicionar uma aresta (conexão) entre dois vértices
// Para um grafo não direcionado, adiciona arestas em ambas as direções
void addEdge(Graph* graph, int src, int dest) {
    if (src >= 0 && src < graph->numVertices && dest >= 0 && dest < graph->numVertices) {
        if (graph->adjMatrix[src][dest] == 0) { // Verifica se a aresta já existe
            graph->adjMatrix[src][dest] = 1; // Adiciona aresta de src para dest
            graph->adjMatrix[dest][src] = 1; // Adiciona aresta de dest para src (para grafo não direcionado)
            printf("Aresta (%d, %d) adicionada.\n", src, dest);
        } else {
            printf("Aresta (%d, %d) já existe.\n", src, dest);
        }
    } else {
        printf("Vértices inválidos: %d ou %d\n", src, dest);
    }
}

// Função para remover uma aresta entre dois vértices
// Para um grafo não direcionado, remove arestas em ambas as direções
void removeEdge(Graph* graph, int src, int dest) {
    if (src >= 0 && src < graph->numVertices && dest >= 0 && dest < graph->numVertices) {
        if (graph->adjMatrix[src][dest] == 1) { // Verifica se a aresta existe antes de remover
            graph->adjMatrix[src][dest] = 0; // Remove aresta de src para dest
            graph->adjMatrix[dest][src] = 0; // Remove aresta de dest para src (para grafo não direcionado)
            printf("Aresta (%d, %d) removida.\n", src, dest);
        } else {
            printf("Aresta (%d, %d) não existe para ser removida.\n", src, dest);
        }
    } else {
        printf("Vértices inválidos: %d ou %d\n", src, dest);
    }
}

// Função para buscar uma aresta entre dois vértices
// Retorna 1 se a aresta existe, 0 caso contrário
int searchEdge(Graph* graph, int src, int dest) {
    if (src >= 0 && src < graph->numVertices && dest >= 0 && dest < graph->numVertices) {
        return graph->adjMatrix[src][dest];
    } else {
        printf("Vértices inválidos: %d ou %d\n", src, dest);
        return -1; // Retorna -1 para indicar erro de vértice
    }
}

// Função para imprimir a matriz de adjacência
void printGraph(Graph* graph) {
    printf("\nMatriz de Adjacência:\n");
    // Imprime os cabeçalhos das colunas (índices dos vértices)
    printf("   ");
    for (int i = 0; i < graph->numVertices; i++) {
        printf("%2d ", i);
    }
    printf("\n");
    printf("---");
    for (int i = 0; i < graph->numVertices; i++) {
        printf("---");
    }
    printf("\n");

    // Imprime a matriz
    for (int i = 0; i < graph->numVertices; i++) {
        printf("%2d|", i); // Imprime o cabeçalho da linha (índice do vértice)
        for (int j = 0; j < graph->numVertices; j++) {
            printf("%2d ", graph->adjMatrix[i][j]);
        }
        printf("\n");
    }
}

// Função para liberar a memória alocada para o grafo
void freeGraph(Graph* graph) {
    if (graph == NULL) return;

    // Libera a memória de cada linha da matriz
    for (int i = 0; i < graph->numVertices; i++) {
        free(graph->adjMatrix[i]);
        graph->adjMatrix[i] = NULL; // Boa prática
    }
    // Libera a memória do array de ponteiros (as linhas)
    free(graph->adjMatrix);
    graph->adjMatrix = NULL; // Boa prática
    // Libera a memória da estrutura do grafo
    free(graph);
    graph = NULL; // Boa prática
}

// Exemplo de uso
int main() {
    int numVertices = 5; // Número de vértices no grafo
    Graph* graph = createGraph(numVertices);

    // Adicionando algumas arestas
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    // Imprimindo o grafo inicial
    printGraph(graph);

    // Testando a função de busca
    printf("\n--- Testando Busca de Arestas ---\n");
    if (searchEdge(graph, 0, 1)) {
        printf("A aresta (0, 1) existe.\n");
    } else {
        printf("A aresta (0, 1) não existe.\n");
    }

    if (searchEdge(graph, 0, 2)) {
        printf("A aresta (0, 2) existe.\n");
    } else {
        printf("A aresta (0, 2) não existe.\n");
    }

    // Testando a função de remoção
    printf("\n--- Testando Remoção de Arestas ---\n");
    removeEdge(graph, 1, 4);
    removeEdge(graph, 0, 2); // Tentando remover uma aresta que não existe

    // Imprimindo o grafo após a remoção
    printGraph(graph);

    // Verificando novamente a aresta removida
    if (searchEdge(graph, 1, 4)) {
        printf("A aresta (1, 4) existe (erro).\n");
    } else {
        printf("A aresta (1, 4) não existe (correto).\n");
    }

    // Liberando a memória alocada para o grafo
    freeGraph(graph);

    return 0;
}
