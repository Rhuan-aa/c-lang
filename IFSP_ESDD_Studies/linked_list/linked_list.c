#include <stdio.h>
#include <stdlib.h>

typedef struct _node 
{
    int item;
    struct _node* next;
} t_node;

typedef struct  
{
    int size;
    t_node* head;
    t_node* tail;
} t_linked_list;

int size(t_linked_list* list) 
{
    return list->size;
}

int is_empty(t_linked_list* list) 
{
    return size(list) <= 0;
}

t_linked_list* create_list() 
{
    t_linked_list* list = malloc(sizeof(t_linked_list));
    list->size = 0;
    list->head = NULL;
    list->tail = NULL;
    return list;
}

int find(t_linked_list* list, int item)
{
    if (is_empty(list)) return 0;

    t_node* indicator = list->head;
    while (indicator != list->tail)
    {
        if (indicator->item == item) return 1;
        indicator = indicator->next;
    }

    return 0;
}

t_node* get_node_item(t_linked_list *list, int item)
{
    if ((find(list, item)) == -1) return NULL;

    t_node* indicator = list->head;
    while (indicator != list->tail)
    {
        if (indicator->item == item) return indicator;
        indicator = indicator->next;
    }

    return NULL;
}

t_node* get_node_by_index(t_linked_list* list, int index)
{
    if (!(index < size(list))) 
    {
        return NULL;
    };
    
    t_node* node = list->head;
    int loop = 0;
    while (loop++ != index)
    {
        node = node->next;
    }
    
    return node;
}

void append(t_linked_list* list, int item) 
{
    t_node* node = malloc(sizeof(t_node));
    node->item = item;
    node->next = NULL;

    if (is_empty(list)) list->head = node;
    else list->tail->next = node;

    list->tail = node;
    list->size++;
}

t_node* pop(t_linked_list* list) 
{
    if (is_empty(list)) return NULL;

    t_node* indicator = list->head;

    while (indicator->next != list->tail) 
    {
        indicator = indicator->next;
    }

    t_node* popped_node = indicator->next;
    list->tail = indicator;
    indicator->next = NULL;
    list->size--;

    return popped_node;
}

t_node* shift(t_linked_list* list)
{
    if (is_empty(list)) return NULL;
    
    t_node* shifted_node = list->head;
    list->head = list->head->next;

    if (list->head == NULL) list->tail = NULL;
    
    list->size--;
    return shifted_node;
}

void insert(t_linked_list* list, int index, int item)
{
    if (index >= size(list))
    {
        printf("ERRO");
        return;
    }
    
    t_node* node = malloc(sizeof(t_node));
    node->item = item;
    node->next = NULL;

    if (is_empty(list))
    {
        return;
    }
    
    t_node* prev = list->head;

    if (index == 0)
    {
        node->next = list->head;
        list->head = node;

        if (list->tail == NULL)
        {
            list->tail = node;
        }
        
        list->size++;
        return;
    }
    
    while ((prev->next) != get_node_by_index(list, index))
    {
        prev = prev->next;
    }

    t_node* aux = prev->next;
    prev->next = node;
    prev->next->next = aux;
    list->size++;
}

void remove_item(t_linked_list* list, int item) {
    if(list == NULL || list->head == NULL) return;
    t_node* node = get_node_item(list, item);
    if (node == list->head)
    {
        list->head = node->next;
        list->size--;
        free(node);
        return;
    }
    
    t_node* prev = list->head;
    

    while (prev->next != node)
    {
        prev = prev->next;
    }
    
    prev->next = node->next;
    free(node);    
    list->size--;
}

void print_list(t_linked_list* list)
{
    t_node* indicator = list->head;
    while (indicator != NULL)
    {
        printf("%d ", indicator->item);
        indicator = indicator->next;
    }
    printf("\n");
}

void destroy_nodes(t_linked_list* list, t_node* node) 
{
    if (node == NULL) return;
    if (node->next != NULL) destroy_nodes(list, node->next);
    free(node);
}

int clear(t_linked_list* list)
{
    destroy_nodes(list, list->head);
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

void clone(t_linked_list* src, t_linked_list* dest)
{
    if (size(src) == 0) return;

    clear(dest);

    t_node* src_node = src->head;
    while (src_node != NULL)
    {
        append(dest, src_node->item);
        src_node = src_node->next;
    }

}

t_node* sorted_insert(t_node* sorted, t_node* node) {
    if (sorted == NULL || node->item < sorted->item) {
        node->next = sorted;
        return node;
    }
    
    t_node* current = sorted;
    while (current->next != NULL && current->next->item < node->item) {
        current = current->next;
    }

    node->next = current->next;
    current->next = node;
    return sorted;
}

void insertion_sort(t_node** head_pointer) {
    t_node* sorted = NULL;
    t_node* current = *head_pointer;

    while (current != NULL) {
        t_node* next = current->next;
        sorted = sorted_insert(sorted, current);
        current = next;
    }
    
    *head_pointer = sorted;
}


void destroy(t_linked_list* list) 
{   
    destroy_nodes(list, list->head);
    free(list);
}

int main(int argc, char const *argv[]) 
{
    t_linked_list* list = create_list();
    append(list, 10);
    append(list, 20);
    append(list, 30);
    print_list(list);

    print_list(list);
    insert(list, 0, 15);
    insert(list, 1, 15);
    insert(list, 2, 15);
    reverse(list);
    t_linked_list* list2 = create_list();
    clone(list, list2);
    sort(list2);
    print_list(list2);

    destroy(list);
    return 0;
}
