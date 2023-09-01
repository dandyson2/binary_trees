#include "binary_trees.h"

/**
* binary_tree_nodes - Function that counts the
* node with at least 1 child in a binary tree.
* @tree: Ptr to the root node of the tree to coun
* t the number of nodes
* Return: 0 if tree is NULL.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes = 0;

if (tree != NULL)
{
nodes += (tree->left || tree->right) ? 1 : 0;
nodes += binary_tree_nodes(tree->left);
nodes += binary_tree_nodes(tree->right);
}

return (nodes);
}
