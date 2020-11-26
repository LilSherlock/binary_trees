#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
        size_t value = 0;

        if (tree == NULL)
                return (0);

        if (tree)
        {
                if (tree->left || tree->right )
                {
                        value += 1;
                }
                else
                {
                        value += 0;
                }
		value += binary_tree_nodes(tree->left);
		value += binary_tree_nodes(tree->right);
        }
        return (value);
}
