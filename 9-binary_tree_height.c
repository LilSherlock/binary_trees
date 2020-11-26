#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t value = 0;
        if (tree == NULL)
                return (0);

        if (tree->left != NULL)
                value++;
        if (tree->right != NULL)
                value++;
        return (value);
}
