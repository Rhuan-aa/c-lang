//https://docs.google.com/document/d/1QYfeQ-jWtlkOkG72VE_YIlnShL4gpbDW0RjNjFtv8LY/edit?usp=sharing

#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int item;
    struct _node* next;
} t_node;

typedef struct {
    t_node* head;
    t_node* tail;
} t_linked_list;

t_linked_list* create_list() {
    t_linked_list* list = (t_linked_list*) malloc(sizeof(t_linked_list));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

int is_empty(t_linked_list* list) {
    return list->head == NULL;
}

int size(t_node* node) {
    if (node == NULL) {
        return 0;
    } else {
        return 1+size(node->next);
    }
}

void append(t_linked_list* list, int item) {
    t_node* node = (t_node*) malloc(sizeof(t_node));
    node->item = item;
    node->next = NULL;

    if (is_empty(list)) {
        list->head = node;
        list->tail = node;
        return;
    }
    list->tail->next = node;
    list->tail = node;
}

t_node* create_node(int value) {
    t_node* new_node = malloc(sizeof(t_node));
    new_node->item = value;
    new_node->next = NULL;

    return new_node;
}

void insert_ordered(t_linked_list* list, t_node* node, int item) {
    if (item < list->head->item) {
        t_node* new_node = create_node(item);
        new_node->next = list->head;
        list->head = new_node;
        return;
    } else if (item < node->next->item) {
        t_node* new_node = create_node(item);
        new_node->next = node->next;
        node->next = new_node;
        return;
    }
    
    insert_ordered(list, node->next, item);
}

void can_insert(t_linked_list* list, int item) {
    if (is_empty(list) || item > list->tail->item) {
        append(list, item);
        return;
    } 
    insert_ordered(list, list->head, item);
}

void remove_by_value(t_linked_list* list, t_node* node, int value) {
    if (is_empty(list)) {
        return;
    } else if (node->item == value && node == list->head) {
        list->head = node->next;
        
        if (list->head == NULL) {
            list->tail = NULL;
        }
        
        free(node);
        return;
    } else if (node == list->tail) {
        if(node->item == value) {
            if (list->head == list->tail) {
                free(node);
                list->head = NULL;
                list->tail = NULL;
            }
        }
        return;
    } else if (node->next != NULL && node->next->item == value) {
        t_node* to_remove = node->next;
        
        if (to_remove == list->tail) {
            list->tail = node;
        }
        
        node->next = to_remove->next;
        free(to_remove);
        return;    
    }
    remove_by_value(list, node->next, value);
}

void swap(t_node* prev, t_node* node) {
    node->next = prev;
}
 
void reverse(t_linked_list* list, t_node* prev, t_node* node) {
    if (node != list->tail) {
        reverse(list, node, node->next);
    }
    swap(prev, node);
}

void is_reversible(t_linked_list* list) {
    if(is_empty(list) || size(list->head) == 1) {
        return;
    }
    
    reverse(list, NULL, list->head);
    t_node* node_aux = list->head;
    list->head = list->tail;
    list->tail = node_aux;
}

t_node* remove_duplicated_values(t_node* node, int value) {
    if (node == NULL) {
        return NULL;
    }

    if (node->item == value) {
        t_node* next = node->next;
        free(node);
        return remove_duplicated_values(next, value);
    }
    
    node->next = remove_duplicated_values(node->next, value);
    return node;
}

t_node* kill_duplicates(t_node* node) { 
    if (node == NULL) {
        return NULL;
    } 

    node->next = remove_duplicated_values(node->next, node->item);
    node->next = kill_duplicates(node->next);

    return node;
}

t_node* update_tail(t_node* node) {
    if (node == NULL) {
        return NULL;
    } if (node->next == NULL) {
        return node;
    }
    
    return update_tail(node->next);
}

void remove_duplicates(t_linked_list* list){
    list->head = kill_duplicates(list->head);
    list->tail = update_tail(list->head);
}

void print_linked_list(t_linked_list* list, t_node* node) {
    printf("%d ", node->item);
    
    if (node == list->tail) {
        printf("\n");
        return;
    }

    print_linked_list(list, node->next);
}

int search_value(t_linked_list* list, t_node* node, int value) { 
    if (node->item == value) {
        return 1;
    } else if(node->item != value && node == list->tail) {
        return 0;
    }
    
    search_value(list, node->next, value);
}

int get_index(t_node* node, int value, int index) {
    if (node->item == value) {
        return index;
    } else if(node->next == NULL) {
        return -1;
    }
    
    return get_index(node->next, value, index+1);
}

int get_index_by_value(t_linked_list* list, int value) {
    if (is_empty(list)) {
        return -1;
    }

    return get_index(list->head, value, 0);
}

void concat_lists(t_linked_list* list_1, t_linked_list* list_2) {
    if (is_empty(list_1)  || is_empty(list_2)) {
        return;
    }

    list_1->tail->next = list_2->head;
    list_1->tail = list_2->tail;
    list_2->head = list_1->head;
}

t_linked_list* merge_list(t_node* node_1, t_node* node_2, t_linked_list* merged_list) {
    if (node_1 == NULL && node_2 == NULL) {
        return merged_list;
    } 

    if (node_1 == NULL) {
        append(merged_list, node_2->item);
        return merge_list(node_1, node_2->next, merged_list);
    }
    
    if (node_2 == NULL || node_1->item <= node_2->item) {
        append(merged_list, node_1->item);
        return merge_list(node_1->next, node_2, merged_list);
    } 

    append(merged_list, node_2->item);
    return merge_list(node_1, node_2->next, merged_list);
}

t_linked_list* create_ord_merged_list(t_linked_list* list_1, t_linked_list* list_2) {
    t_linked_list* merged_list = create_list();
    
    if (is_empty(list_1) && is_empty(list_2)) {
        return merged_list;
    }

    merge_list(list_1->head, list_2->head, merged_list);
    return merged_list;
}

void copy(t_linked_list* list_clone, t_node* node) {
    if (node == NULL) {
        return;
    }
    
    append(list_clone, node->item);
    copy(list_clone, node->next);
}

t_linked_list* clone(t_linked_list* list) {
    t_linked_list* list_clone = create_list();

    if (is_empty(list)) {
        return list_clone;
    }
    
    copy(list_clone, list->head);
    return list_clone;
}

int check_palindrome(t_node* node_left, t_node* node_right) {
    if (node_left == NULL && node_right == NULL) {
        return 1;
    } else if (node_left->item != node_right->item || node_left == NULL || node_right == NULL) {
        return 0;
    }

    return check_palindrome(node_left->next, node_right->next);
}

int is_palindrome(t_linked_list* list) {
    t_linked_list* reversed_list = clone(list);
    is_reversible(reversed_list);

    return check_palindrome(list->head, reversed_list->head);
}

int main(int argc, char const *argv[])
{
    t_linked_list* list = create_list();
    append(list, 10);
    append(list, 20);
    append(list, 30);
    append(list, 20);
    append(list, 10);


    printf("Lista Original: ");
    print_linked_list(list, list->head);
    
    remove_duplicates(list);

    printf("Lista sem Duplicatas: ");
    print_linked_list(list, list->head);

    return 0;
}
