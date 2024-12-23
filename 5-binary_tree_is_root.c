#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is the root of the tree.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if node is the root, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);  // If the node is NULL, it's not a root.

	// A node is a root if it has no parent (i.e., parent is NULL).
	if (node->parent == NULL)
		return (1);  // It's the root.

	return (0);  // It's not the root.
}
