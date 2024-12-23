#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	print_binary_tree(root, 0); /* Assuming your print function is defined */
	printf("\n");

	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	print_binary_tree(root, 0);

	return (0);
}
