#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary is perfect
 * @tree: a pointer
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)_pow_recursion(2, height + 1);
	return (power - 1 == nodes);
}

/**
 * _pow_recursion - returns a value of x raised to power y
 * @x: the value
 * @y: the power
 * Return: x to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else 
		return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_tree_size - measures size of a binary
 * @tree: a pointer
 * Return: 0 or 1
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
/**
 * binary_tree_height - calculate the height of the binary
 * @tree: the pointer
 * Return: 0 or 1
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

