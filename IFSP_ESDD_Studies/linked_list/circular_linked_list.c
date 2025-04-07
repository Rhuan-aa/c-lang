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