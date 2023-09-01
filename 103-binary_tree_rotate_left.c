#include "binary_trees.h"

/**
* binary_tree_rotate_left - Function that perform
* s a left-rotation on a binary tree.
* @tree: Ptr to the root node of the tree.
* Return: Ptr to the new root node of the tree.
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
if (tree == NULL || tree->right == NULL)
return (NULL);

binary_tree_t *pivot = tree->right;
binary_tree_t *tmp = pivot->left;

pivot->left = tree;
tree->right = tmp;

if (tmp != NULL)
tmp->parent = tree;

tmp = tree->parent;
tree->parent = pivot;
pivot->parent = tmp;

if (tmp != NULL)
{
if (tmp->left == tree)
tmp->left = pivot;
else
tmp->right = pivot;
}

return (pivot);
}
