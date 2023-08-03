#include <stddef.h>

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			left_height = binary_tree_height(tree->left) + 1;
		if (tree->right != NULL)
			right_height = binary_tree_height(tree->right) + 1;
	}

	return (left_height > right_height ? left_height : right_height);
}
