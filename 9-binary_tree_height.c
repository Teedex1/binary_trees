#include "binary_trees.h"
/**
 * binary_tree_height - this  measures the height of a binary tree
 * @tree: tree to measure
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_i = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_i = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_i > height_r ? height_i : height_r);
}
