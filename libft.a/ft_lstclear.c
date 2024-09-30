#include "libft.h"
#include <stdlib.h>

/*
 * ft_lstclear - Deletes and frees all nodes in the linked list.
 * @lst: Address of the pointer to the first node in the list.
 * @del: Function pointer used to delete the content of each node.
 *
 * This function iterates through the linked list, freeing each node's
 * content using the provided 'del' function, and then freeing the node itself.
 * Once all nodes are freed, the pointer to the list is set to NULL to indicate
 * that the list is now empty and prevent any dangling pointer issues.
 */
void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;  // Temporary pointer to store the next node

    // Iterate through the list until we reach the end (NULL)
    while (*lst != NULL)
    {
        tmp = (*lst)->next;  // Save the next node before deleting the current node
        ft_lstdelone(*lst, del);  // Delete the current node using ft_lstdelone
        *lst = tmp;  // Move to the next node
    }
    /*
     * IMPORTANT: Setting the list pointer to NULL.
     * After freeing all nodes, we set *lst to NULL to ensure that
     * the original pointer to the list is updated. This is necessary to
     * indicate that the list is empty and to prevent dangling pointers.
     */
    *lst = NULL;
}
