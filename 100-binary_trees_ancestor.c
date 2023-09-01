#include "binary_trees.h"

/**
* binary_trees_ancestor - Function that finds the
* lowest common ancestor of two nodes.
* @first: Ptr to the first node
* @second: Ptr to the second node
* Return: NULL if no common ancestor is found
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
binary_tree_t *mom = (binary_tree_t *)first;
binary_tree_t *pop = (binary_tree_t *)second;

if (!mom || !pop)
return (NULL);

while (mom != pop)
{
mom = (mom == NULL) ? (binary_tree_t *)second : mom->parent;
pop = (pop == NULL) ? (binary_tree_t *)first : pop->parent;
}

return (mom);
}
