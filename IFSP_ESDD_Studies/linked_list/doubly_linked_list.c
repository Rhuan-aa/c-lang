typedef struct _node {
    int item;
    struct _node* next;
    struct _node* prev;
} t_node;

typedef struct {
    int size;
    t_node* head;
    t_node* tail;
} t_linked_list;