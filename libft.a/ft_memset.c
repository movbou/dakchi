#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char value;            // The value to set in each byte
    size_t index;                   // Index for iterating through the memory block
    unsigned char *ptr ; 

    ptr =(unsigned char *)b;        // Cast 'b' to 'unsigned char *' for byte-wise operations
    index = 0;
    value = (unsigned char)c;       // Cast 'c' to 'unsigned char' to ensure it fits into a byte
    while (index < len)
        ptr[index++] = value;       // Set each byte in the memory block to 'value'
    
    return (b);                     // Return the original pointer 'b'
}

