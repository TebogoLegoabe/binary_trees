#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: Depth of the node.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int temp;

	for (temp = 0; node && node->parent; ++temp)
		node = node->parent;
	return (temp);
}
