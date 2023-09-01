#include "binary_trees.h"

/**
* binary_tree_insert_left - Function that inserts
* a node as the right-child of another node.
* @parent: Pointer to the node
* @value: Value to store in new node
* Return: A pointer to the created node, NULL on
* failure or if parent is NULL.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (parent == NULL)
return (NULL);

new = binary_tree_node(parent, value);
if (new == NULL)
return (NULL);

if (parent->left != NULL)
parent->left->parent = new;
new->left = parent->left;
parent->left = new;

return (new);
}
