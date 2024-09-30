#include "libft.h"
#include <stdlib.h>
/**
 *it is already in libft.h so makin lach tkon fl code dyalna
 * 
 * typedef struct s_list
{
    void *content;         // Pointer to the content of the node (can be any data type)
    struct s_list *next;   // Pointer to the next node in the list
} t_list;*/

/*
 * Function: ft_lstnew
 * -------------------
 * Allocates memory for a new node in a linked list, initializes the node
 * with the given content, and sets the 'next' pointer to NULL.
 *
 * Parameters:
 *   content: A pointer to the content that the new node will store.
 *
 * Returns:
 *   A pointer to the newly created node, or NULL if memory allocation fails.
 */
t_list *ft_lstnew(void *content)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    // Assign the passed param pointer to the content member of the new node
    // No dereferencing is done since content is already a pointer
    new_node->content = content;
    // Initialize the 'next' pointer to NULL since this is the last node
    // with no connection to other nodes yet
    new_node->next = NULL;
    // Return the pointer to the newly created node
    return new_node;
}
