#include "binary_trees.h"
/**
 * binary_tree_depth - main
 * @tree: node
 * Return: Counter
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
        size_t counter = 0;

        if (tree == NULL)
                return (0);

        while(tree->parent != NULL)
        {
                counter++;
                tree = tree->parent;
        }
        return (counter);
}
