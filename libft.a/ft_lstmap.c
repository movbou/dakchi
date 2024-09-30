#include "libft.h"
/*
 * Function: ft_lstmap
 * -------------------
 * Iterates over a linked list `lst`, applies the function `f` to the content of each node,
 * and creates a new linked list with the results. If memory allocation fails at any point,
 * it frees all previously allocated nodes and returns NULL. The new list is properly
 * terminated with the last node's `next` pointer set to NULL.
 */

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_list = NULL;   // Pointer to the head of the new list
    t_list  *new_node = NULL;   // Pointer to the current node being created
    t_list  *current = NULL;    // Pointer to track the last node in the new list

    // Iterate through each node in the original list
    while (lst)
    {
        // Allocate memory for a new node
        new_node = (t_list *)malloc(sizeof(t_list));
        if (!new_node)  // If memory allocation fails
        {
            ft_lstclear(&new_list, del);  // Free all previously allocated nodes in the new list
            return NULL;  // Return NULL to indicate failure
        }

        // Apply the function 'f' to the current node's content and store the result in the new node
        new_node->content = f(lst->content);

        // Initialize the next pointer of the new node to NULL
        // This is crucial because it ensures that if this is the last node,
        // it correctly points to NULL, indicating the end of the list.
        new_node->next = NULL;

        if (!new_list)  // If this is the first node being created
            new_list = new_node;  // Set new_list to point to this first node
        else            // If this is not the first node
            current->next = new_node;  // Link the last node in the new list to the new node

        // Move the 'current' pointer to the new node
        current = new_node;

        // Move to the next node in the original list
        lst = lst->next;
    }

    // No need for an explicit NULL assignment here because:
    // - In the loop, each 'new_node->next' is already initialized to NULL.
    // - This guarantees that the last node's 'next' pointer will always be NULL,
    //   correctly indicating the end of the new list.

    // Return the head of the newly created list
    return new_list;
}
