#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	printf("  .--(%d)--.\n", tree->n);
	if (tree->left)
		binary_tree_print(tree->left);
	if (tree->right)
	binary_tree_print(tree->right);
}
