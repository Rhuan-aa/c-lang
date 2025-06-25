#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int item;
    struct _node* left;
    struct _node* right;
} t_node;

typedef struct {
    t_node* root;
} t_binary_tree;

t_node* create_node(int item) {
    t_node* node = (t_node*) malloc(sizeof(t_node));
    node->item = item;
    node->left = NULL;
    node->right = NULL;

    return node;
}

t_binary_tree *create_tree() {
    t_binary_tree* tree = (t_binary_tree*) malloc(sizeof(t_binary_tree));
    tree->root = NULL;

    return tree;
}

t_node* ordered_insert(t_node* node, int item){
    if (node == NULL) {
        return create_node(item);
    }

    if (node->item < item ) {
        node->right = ordered_insert(node->right, item);
    } else if (node->item > item) {
        node->left = ordered_insert(node->left, item);
    }

    return node;
}

void insert(t_binary_tree* tree, int item) {
    tree->root = ordered_insert(tree, item);
}

t_node* binary_search (t_node* node, int item) {
    if (item == node->item || node == NULL) {
        return node;
    } 
    
    if (node->item < item) {
        return binary_search (node->right, item);
    } else {
        return binary_search (node->left, item);
    }
}

t_node* search(t_binary_tree* tree, int item) {
    return binary_search(tree->root, item);
}

void in_order(t_node* node){
    if (node != NULL) {
        in_order(node->left);
        printf("%d ", node->item);
        in_order(node->right);
    }
}

void destroy_nodes(t_node* node){
    if (node != NULL) {
        destroy_nodes(node->left);
        destroy_nodes(node->right);
        free(node);
    }
}

void destroy_tree(t_binary_tree* tree){
    if (tree != NULL) {
        destroy_nodes(tree->root);
    }
    
    free(tree);
}

/*
void insert_iterative(t_binary_tree* tree, int item);
void remove_from_tree(t_binary_tree* tree, int item);
int get_node_height(t_node* node);
t_node* get_min_item(t_binary_tree* tree);
t_node* get_max_item(t_binary_tree* tree);
*/

int main(int argc, char const *argv[])
{
    t_binary_tree* tree = create_tree();

    insert(tree, 10);
    insert(tree, 5);

    in_order(tree->root);

    destroy_tree(tree);
    return 0;
}    
