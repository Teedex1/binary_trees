#inlcude "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes
 * @tree: the tree to count
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
/**
 * binary_tree_size - measures the size a of a tree
 * @tree: the tree to measure
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
/**
 * binary_tree_leaves - measures the size of the leaves on the binary tree
 * @tree: tree to count leaves
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
