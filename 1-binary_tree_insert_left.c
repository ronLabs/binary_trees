#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Pointer to the parent node of the node to create.
 * @value: Value to put in the new node.
 * Return: Pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;

	if (parent == NULL)
		return (NULL);

	tempNode = binary_tree_node(parent, value);
	if (tempNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		tempNode->left = parent->left;
        parent->left->parent = tempNode;
		parent->left = tempNode;
	}
	else
		parent->left = tempNode;
	return (parent);
}
