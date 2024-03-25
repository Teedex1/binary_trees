#include "binary_trees.h"
/**
 * binary_tree_node - This creates a new node
 * @parent: a pointer to the parent node
 * @value: the value in the new node
 * Return: a pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
