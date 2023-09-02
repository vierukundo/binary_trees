#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			left_height = 1 + binary_tree_balance(tree->left);
		if (tree->right != NULL)
			right_height = 1 + binary_tree_balance(tree->right);
		return (left_height - right_height);
	}
	return (0);
}
