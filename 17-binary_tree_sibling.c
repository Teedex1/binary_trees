#include "binary_trees.h"
/**
 * binary_tree_sibling - search for the siblings of the node
 * @node: the pointer
 * Return: the pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
