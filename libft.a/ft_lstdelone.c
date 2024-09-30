#include "libft.h"
#include <stdlib.h> // Needed for the free function

/*
 * Function: ft_lstdelone
 * ----------------------
 * Frees the memory of a single node in a linked list, including its content,
 * but does not free the memory of the next node or any subsequent nodes.
 *
 * Parameters:
 *   - lst: The node to free.
 *   - del: A function pointer to a function that takes a pointer to the content 
 *          of the node and frees it. This function is responsible for freeing 
 *          the memory pointed to by `lst->content`.
 *
 * Returns:
 *   - None.
 * 
 * Note:
 *   - This function only frees the memory of the node pointed to by `lst` and 
 *     its content. It does not traverse the list or free any other nodes.
 *   - The memory of `lst->next` (i.e., the next node in the list) is not freed
 *     or affected by this function. If you want to free the entire list, you
 *     need to handle each node individually, usually in a loop.
 */

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    // Check if both the node (lst) and the deletion function (del) are non-null
    if (lst && del)
    {
        // Use the function 'del' to free the content of the node
        del(lst->content);

        // Free the memory allocated for the node itself (lst)
        free(lst);

        // Important: This only frees the current node and its content. 
        // It does NOT free the memory of 'lst->next' (the next node in the list).
        // The memory pointed to by 'lst->next' remains allocated and must be
        // freed separately if needed.
    }
}
