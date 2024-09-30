#include "libft.h"
/*
 * Function: ft_lstadd_back
 * -------------------------
 * Adds a new node to the end of the linked list.
 *
 * Parameters:
 *   lst: A double pointer to the head of the list. This allows modifying
 *        the list's head pointer if the list is empty.
 *   new: A pointer to the new node to be added to the end of the list.
 *
 * Returns:
 *   None
 */
void ft_lstadd_back(t_list **lst, t_list *new)
{
    // Check if either the list pointer or the new node is NULL
    if (!lst || !new)
        return;

    // If the list is empty, the new node becomes the head of the list
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }

    // Find the last node in the list
    t_list *last = ft_lstlast(*lst);

    // Link the new node to the end of the list
    last->next = new;
}
