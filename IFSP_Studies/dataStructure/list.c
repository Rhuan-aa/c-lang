#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int max; // tamanho alocado
    int n; // numero de elementos
    int* items; //vetor com os elementos
}t_list;

t_list* create_list (int max)
{
    t_list* list = (t_list*) malloc(sizeof(t_list));
    list->max = max;
    list->n = 0;
    list->items = (int*) malloc(sizeof(int)*max);

    return list;
}

void destroy_list(t_list* list)
{
    free(list->items);
    free(list);
}


int is_full(t_list* list)
{
    return list->n >= list->max;
}

int is_empty(t_list* list)
{
    return list->n <= 0;
}

int len(t_list* list)
{
    return list->n;
}

void print_list(t_list* list)
{   
    for (int i = 0; i < list->n; i++)
    {
        printf("%d\t", list->items[i]);
    }
    printf("\n");
}

int append(t_list* list, int elem)
{
    if (!is_full(list))
    {
        list->items[list->n++] = elem;
        return 1;
    }

    return 0;
}

void clear (t_list* list)
{   
    list->max = 0;
}

int search(t_list* list, int elem)
{
    for (int i = 0; i < len(list); i++)
    {
        if (list->items[i] == elem)
        {
            return i;
        }
        
    }
    return -1;
}

void insert(t_list* list, int index, int elem)
{
    if (!is_full(list))
    {
        for (int i = len(list); i > index; i--)
        {
            list->items[i] = list->items[i-1];
        }
        list->items[index] = elem;
        list->n++;
    }
}

void pop(t_list* list)
{
    if (!is_empty(list))
    {
        list->n--;
    }
}

void remove_by_index(t_list* list, int index)
{
    if (!is_empty(list))
    {
        for (int i = index; i+1 < len(list); i++)
        {   
            list->items[i] = list->items[i+1];
        }
        list->n--;
    } else
        printf("ERROR: Lista esta vazia");
}

int main(int argc, char const *argv[])
{
    //Declarar lista
    t_list* list;

    //Criar uma lista
    list = create_list(10);

    //Adicionar alguns elementos
    append(list, 10);
    append(list, 11);
    append(list, 12);
    append(list, 13);
    append(list, 14);
    append(list, 15);
    append(list, 16);
    append(list, 17);
    append(list, 18);
    append(list, 19);
    pop(list);
    insert(list, 5, 20);
    remove_by_index(list, 5);

    //Imprimir a Lista
    print_list(list);

    //Liberar memória
    destroy_list(list);

    return 0;
}
