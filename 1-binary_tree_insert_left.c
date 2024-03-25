#include "binary_trees.h"
/**
 * binary_tree_insert_left - This insert a node as the left-child
 * of another node
 * @parent: a pointer to the node to insert
 * @value: the value stored in the new node
 * Return: a pointer to the creted node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
