#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root
 * @node: the node to check
 * Return: 1 is node is the root && 0 if node is not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
