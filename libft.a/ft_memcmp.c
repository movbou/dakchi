#include "libft.h"

/**
 * ft_memcmp - Compares the first n bytes of two memory blocks.
 * 
 * @s1: Pointer to the first memory block.
 * @s2: Pointer to the second memory block.
 * @n: Number of bytes to compare.
 * 
 * Compares the first `n` bytes of the memory areas pointed to by `s1` and `s2`. 
 * Uses `const unsigned char *` to ensure the function does not modify the input 
 * data, adhering to the read-only nature of the parameters.
 * 
 * Return: An integer less than, equal to, or greater than zero, depending on 
 * whether the first differing byte in `s1` is less than, equal to, or greater 
 * than the corresponding byte in `s2`.
 */
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    // Cast the pointers to unsigned char* to allow byte-by-byte comparison.
    const unsigned char *first_buff = (const unsigned char *)s1;
    const unsigned char *second_buff = (const unsigned char *)s2;

    size_t index = 0; // Initialize index for iteration.
    
    // Loop through the memory blocks byte-by-byte.
    while (index < n)
    {
        if (first_buff[index] != second_buff[index])
            return (first_buff[index] - second_buff[index]);
        index++; // Move to the next byte.
    }
    
    // If all bytes are equal, return 0.
    return 0;
}
