#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new_node;

        new_node = malloc(sizeof(binary_tree_t));
        if (new_node == NULL)
                return (new_node);
        if (parent == NULL)
                return (NULL);

        new_node->parent = parent;
        new_node->n = value;

        if (parent->parent == NULL)
        {
                new_node->right = parent->right;
                parent->right->parent = new_node;
                new_node->left = NULL;
                parent->right = new_node;
        }
        else
        {
                new_node->right = NULL;
                new_node->left = NULL;
                parent->right = new_node;
        }
        return (new_node);
}
