#include "binary_trees.h"

/**
* binary_tree_insert_left - function that inserts a node as the left-child\
* of another node
* @parent: pointer to the ndoe to insert the left-child in
* @value: the value to store in the new node
* Return: pointer to the created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL || !value)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
