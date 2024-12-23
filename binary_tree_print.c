#include "binary_trees.h"
#include <stdio.h>

/**
 * print_binary_tree - Recursively prints the binary tree
 * @tree: Pointer to the root node of the tree
 * @level: Current level of the tree (used for indentation)
 */
void print_binary_tree(const binary_tree_t *tree, int level)
{
	if (!tree)
		return;

	/* Print right subtree with increased level (more indentation) */
	print_binary_tree(tree->right, level + 1);

	/* Indentation proportional to tree level */
	for (int i = 0; i < level; i++)
		printf("    ");

	/* Print current node */
	printf("(%d)\n", tree->n);

	/* Print left subtree with increased level */
	print_binary_tree(tree->left, level + 1);
}

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
