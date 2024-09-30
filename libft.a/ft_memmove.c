#include "libft.h"

/*
 * Function: ft_memmove
 * --------------------
 * Copies 'len' bytes from memory area 'src' to memory area 'dst'. 
 * The memory areas may overlap: copying takes place as though the 
 * bytes in 'src' are first copied into a temporary array that does 
 * not overlap 'src' or 'dst', and the bytes are then copied from 
 * the temporary array to 'dst'.
 *
 * Parameters:
 *   dst - Pointer to the destination memory area.
 *   src - Pointer to the source memory area.
 *   len - Number of bytes to copy.
 *
 * Returns:
 *   The original value of 'dst'.
 */

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t index;

    // Cast 'dst' to an unsigned char pointer for byte-level manipulation.
    unsigned char *ptrdest = (unsigned char *)dst;

    // same here 
    const unsigned char *ptrsrc = (const unsigned char *)src;

    if (dst == src || len == 0)
        return dst;

    // Initialize 'index' to 'len' (the number of bytes to copy).
    index = len;

    // Check if 'src' is less than 'dst' in memory. If so, the regions may overlap,
    // and we need to copy backwards from the end of the source to the end of the destination.
    if (ptrsrc < ptrdest)
    {
        // Copy bytes backwards to avoid overwriting the source data
        // before it has been copied.
        while (index--)
            ptrdest[index] = ptrsrc[index];
    }
    else
    {
        // If there is no overlap or 'src' is after 'dst' in memory,
        // a simple forward copy using 'ft_memcpy' will be sufficient.
        ft_memcpy(dst, src, len);
    }

    return (dst);
}
