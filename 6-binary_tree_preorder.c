#include "binary_trees.h"
/**
 * binary_tree_preorder - this goies through tree using preorder traversal
 * @tree: the tree to traverse
 * @func: the punter
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
