#include "libft.h"
/**
 * calloc - Allocates memory for an array and initializes it to zero.
 * 
 * @nmemb: Number of elements to allocate.
 * @size: Size of each element in bytes.
 * 
 * Allocates a block of memory for an array of `nmemb` elements, each of 
 * `size` bytes, and initializes all bytes in the block to zero.
 * 
 * Return: A pointer to the allocated memory, or NULL if allocation fails.
 */
void *ft_calloc(size_t nmemb, size_t size)
{
    void *holder;

    if (nmemb == 0 || size == 0)
		return (malloc(0));
    // Allocate memory for the array of elements
    if(!(holder = malloc(nmemb * size)))
        return NULL;

    // Initialize the allocated memory to zero
    ft_bzero(holder, (nmemb * size));

    // Return the pointer to the allocated and initialized memory
    return holder;
}
