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
if (!first || !second)
return NULL;

if (first == second)
return (binary_tree_t *first);

binary_tree_t *mom = first->parent;
binary_tree_t *pop = second->parent;

if (first == pop || !mom || (!mom->parent && pop))
return (binary_trees_ancestor(first, pop));
else if (mom == second || !pop || (!pop->parent && mom))
return (binary_trees_ancestor(mom, second));
else
return (binary_trees_ancestor(mom, pop));
}
