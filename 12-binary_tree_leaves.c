#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leavs
 * @tree: the tree to count the leaves
 * Return: the number of leaves counted
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
