#include "binary_trees.h"

/**
* binary_tree_preorder - Function that goes
* through a binary tree using pre-order traversal
* @tree: Pointer to the root node of the tree to
* traverse.
* @func: Pointer to a function to call fo each
* node.
* Result: If tree or func is NULL, do nothing.
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
