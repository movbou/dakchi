#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *last_acc = NULL;

    // Iterate through the string
    while (*s)
    {
        if (*s == (char)c)
            last_acc = (char *)s; // Update last_acc if match is found
        s++;
    }

    // Check if the character c is the null terminator
    if ((char)c == '\0')
        return (char *)s; // Return the pointer to the null terminator

    // Return the last occurrence of the character
    return last_acc;
}
