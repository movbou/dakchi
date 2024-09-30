#include "libft.h"
/*
 * Function: ft_lstadd_front
 * -------------------------
 * Adds a new node at the beginning of the linked list.
 *
 * Parameters:
 *   lst: A double pointer to the head of the list. This allows the function
 *        to modify the original list's head pointer.
 *   new: A pointer to the new node to be added at the beginning of the list.
 *
 * Returns:
 *   None
 */
void ft_lstadd_front(t_list **lst, t_list *new)
{
    // Check if either the list head pointer (lst) or the new node (new) is NULL.
    // If either is NULL, the function returns immediately without doing anything.
    if (!lst || !new)
        return;

    // Point the 'next' field of the new node to the current first node in the list.
    // This links the new node to the existing list.
    new->next = *lst;

    // Update the list's head pointer to point to the new node.
    // This makes the new node the first node in the list.
    *lst = new;
}
