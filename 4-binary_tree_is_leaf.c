#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: the node to check
 * Return: 1 is node is a leaf and 0 is its not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
