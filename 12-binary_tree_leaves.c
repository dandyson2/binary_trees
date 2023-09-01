#include "binary_trees.h"

/**
* binary_tree_leaves - Function that counts the
* leaves in a binary tree.
* @tree: Ptr to the root node of the tree to coun
* t the number of leaves.
* Return: 0 if tree is NULL.
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (!tree)
return (0);

return ((!tree->left && !tree->right) ? 1 : 0 + binary_tree_leaves(tree->left)
	+ binary_tree_leaves(tree->right));
}
