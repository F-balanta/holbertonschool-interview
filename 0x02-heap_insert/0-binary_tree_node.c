#include "binary_trees.h"

/**
 * binary_tree_node - Create a BinaryTree node
 * @parent: A pointer to the parent node of the node to create
 * @value: Value to add int the new node
 *
 * Return: A pointer to the new node or NULL if failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = NULL;
	new->left = NULL;
	new->right = NULL;

	if (parent)
		new->parent = parent;

	return (new);
}
