#include "binary_trees.h"

/**
* is_leaf - Function that checks if a node
* is a leaf in a binary tree
* @node: Ptr to the node to check.
* Return: 1 if node is a leaf, 0 otherwise.
*/

unsigned char is_leaf(const binary_tree_t *node)
{
return (node->left == NULL && node->right == NULL) ? 1 : 0;
}

/**
* depth - Function that returns the depth
* of a given node in a binary tree.
* @tree: Ptr to the root node of tree to check.
* Return: Node depth
*/

size_t depth(const binary_tree_t *tree)
{
return (tree->parent != NULL) ? 1 + depth(tree->parent) : 0;
}

/**
* get_leaf - Function that returns a leaf in
* a binary tree.
* @tree: Ptr to the root node of tree to check.
* Return: Ptr to the first leaf in binary tree
*/

const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
if (is_leaf(tree) == 1)
return tree;
return tree->left ? get_leaf(tree->left) : get_leaf(tree->right);
}

/**
* is_perfect_recursive - Function that checks if a
* binary tree is recursively perfect.
* @tree: Ptr to the root node of tree to check.
* @leaf_depth: The depth of one leaf in the binary tree.
* @level: Level of the current node.
*
* Return: If the tree is perfect, 1, otherwise 0.
*/

int is_perfect_recursive(const binary_tree_t *tree,
size_t leaf_depth, size_t level)
{
if (is_leaf(tree))
return (level == leaf_depth) ? 1 : 0;
if (tree->left == NULL || tree->right == NULL)
return 0;
return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
* binary_tree_is_perfect - Function that checks
* if a binary tree is perfect.
* @tree: Ptr to the root node of the tree to check
* Return: 0 if tree is NULL.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return 0;
return is_perfect_recursive(tree, depth(get_leaf(tree)), 0);
}
