#include "binary_trees.h"
/**
 * binary_tree_is_full - checks id a binary tree is fulll
 * @tree: pointer to a node
 * Return: 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	return (0);
}
