#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int counter = 0;

    // Traverse the list until we reach the end (NULL)
    while (lst != NULL) // Check if the current node is not NULL
    {
        counter++;        // Increment counter for each node encountered
        lst = lst->next; // Move to the next node
    }

    return counter; // Return the total count of nodes
}
