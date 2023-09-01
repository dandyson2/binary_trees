#include "binary_trees.h"

/**
* _repetitive_func - Function that checks if a
* function is fully recursive
* @tree: Ptr to the root node of the tree to check
* Return: 0 if tree is NULL.
*/
int _repetitive_func(const binary_tree_t *tree)
{
if (tree == NULL)
return (1);

if ((tree->left == NULL && tree->right != NULL) ||
(tree->left != NULL && tree->right == NULL) ||
!_repetitive_func(tree->left) ||
!_repetitive_func(tree->right))
return (0);

return (1);
}

/**
* binary_tree_is_full - Function that checks if
* a binary tree is full.
* @tree: Ptr to the root node of the tree to
* check
* Return: 0 if tree is NULL.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (_repetitive_func(tree));
}
