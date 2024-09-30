#include "libft.h"

/**
 * @brief Copies `n` bytes from memory area `src` to memory area `dst`.
 * 
 * @param dst   Pointer to the destination memory area.
 * @param src   Pointer to the source memory area.
 * @param n     Number of bytes to copy.
 * @return      Pointer to the destination memory area (`dst`).
 * 
 * Note: This function does not handle overlapping memory regions. For such cases,
 *       use `memmove` instead of `memcpy`.
 */
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *dest = (unsigned char *)dst;       // Cast 'dst' to 'unsigned char *' for byte-wise operations
    const unsigned char *source = (const unsigned char *)src; // Cast 'src' to 'const unsigned char *'
    size_t index = 0;                                // Index for iterating through memory
   
    if (!dst && !src && n > 0) // Check if both dst and src are NULL and n > 0
        return NULL;
    // Copy bytes from source to destination
    while (index < n)
    {
        dest[index] = source[index];  // Copy each byte from source to destination
        index++;                     // Move to the next byte
    }
    return (dst);  // Return the destination pointer
}
