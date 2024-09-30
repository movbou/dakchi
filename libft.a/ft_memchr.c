#include "libft.h"

/**
 * ft_memchr - Locate the first occurrence of a byte in a block of memory.
 * 
 * @s: Pointer to the block of memory where the search is to be performed.
 * @c: The byte value to search for.
 * @n: The number of bytes to examine in the memory block.
 * 
 * This function searches for the first occurrence of the byte value `c` 
 * in the first `n` bytes of the block of memory pointed to by `s`.
 * 
 * Return: A pointer to the first occurrence of the byte `c` in the block 
 *         of memory, or NULL if the byte is not found within the specified 
 *         range.
 */
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t index;                            // Variable to iterate over the memory block
    const unsigned char *casted_s = (const unsigned char *)s; // Cast `s` to `const unsigned char *`
    unsigned char ch = (unsigned char)c;     // Cast `c` to `unsigned char` for comparison

    index = 0; // Initialize the index to 0
    
    // Iterate over each byte in the block of memory
    while (index < n)
    {
        // Check if the current byte matches the byte we're looking for
        if (casted_s[index] == ch)
            // If a match is found, return a pointer to the matching byte |
            // khdmna b s + index & it doesn't work 7it lpointer flcase d void *
            // maki3rfch ch7al ysid mn byte (learn about pointer arithmetic)
            return (void *)(casted_s + index);

        index++; // Move to the next byte
    }
    
    // If the byte is not found, return NULL
    return NULL;
}
