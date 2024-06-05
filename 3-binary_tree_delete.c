#include "binary_trees.h"
/**
* binary_tree_delete - frees binary_tree
*@tree: root node to tree to free
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
