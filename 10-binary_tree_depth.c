#include "binary_trees.h"
/**
 * binary_tree_depth - This measures the depth of the node
 * @tree: node to measure
 * Return: dept of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
