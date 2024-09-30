#include "libft.h"
/*
 * Function: ft_lstlast
 * ---------------------
 * Finds and returns the last node of the linked list.
 *
 * Parameters:
 *   lst: The pointer to the head of the list.
 *
 * Returns:
 *   A pointer to the last node of the list. If the list is empty (NULL),
 *   returns NULL.
 */
t_list *ft_lstlast(t_list *lst)
{
    // Check if the list is empty
    if (!lst)
        return NULL;
    // Traverse the list until reaching the last node
    while (lst->next != NULL)
    {
        lst = lst->next; // Move to the next node
    }
    // Return the last node
    return (lst);
}
