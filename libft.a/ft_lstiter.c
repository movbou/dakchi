#include "libft.h"

/*
 * ft_lstiter - Iterates through the linked list and applies a function to each node's content.
 * @lst: Pointer to the first node in the list.
 * @f: Function pointer used to process the content of each node.
 *
 * This function traverses the linked list starting from 'lst'. For each node,
 * it applies the function 'f' to the content of the node. The function does not
 * modify the structure of the list itself, only the data contained in each node.
 */
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    // Iterate through the list until the end (NULL)
    while (lst != NULL)
    {
        f(lst->content);  // Apply the function 'f' to the content of the current node
        lst = lst->next;  // Move to the next node in the list
    }
}
