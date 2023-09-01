#include "binary_trees.h"

/**
* binary_tree_balance - Function that measure the
* balance factor of a binary tree.
* @tree: Ptr to the root node of the tree to mea-
* sure the balance factor.
* Return: 0 if tree is NULL.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
{
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
return (0);
}

/**
* binary_tree_height - Function that measures the
* height of a binary tree.
* @tree: Ptr to the root node of the tree to mea-
* sure the height.
* Return: 0 of tree is NULL.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
size_t right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;
return (left_height > right_height ? left_height : right_height);
}
return (0);
}
