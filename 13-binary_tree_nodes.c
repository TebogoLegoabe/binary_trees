#include "binary_trees.h"

/**
 * binary_tree_nodes - that counts the nodes with at least 1 child in a binary tree
 * @tree: is a pointer to the root node
 * of the tree to count the number of nodes
 * Return: Null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    // If tree is NULL or has no children, return 0
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	else
	{
	// Recursively count nodes in the left and right subtrees
	size_t left_count = binary_tree_nodes(tree->left);
	size_t right_count = binary_tree_nodes(tree->right);

	// Return the sum of the counts plus 1 for the current node
	return (left_count + right_count + 1);
}
