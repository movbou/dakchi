#include "libft.h"
#include <stdlib.h>

/*
 * Function: ft_strjoin
 * ---------------------
 * Allocates (with malloc) and returns a new string that is the result of 
 * concatenating `s1` and `s2`. The new string is null-terminated.
 * 
 * Parameters:
 *   - s1: The prefix string.
 *   - s2: The suffix string.
 * 
 * Returns:
 *   - A newly allocated string containing the concatenation of `s1` and `s2`.
 *   - NULL if memory allocation fails or if either `s1` or `s2` is NULL.
 */
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t s1_len;
    size_t s2_len;
    char *strptr;
    size_t index;

    // Check if either input string is NULL
    if (!s1 || !s2)
        return NULL;
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    strptr = (char *)malloc(s1_len + s2_len + 1);
    if (!strptr)  
        return NULL;
    index = 0;
    while (index < s1_len)
    {
        strptr[index] = s1[index];
        index++;
    }
    while (index < s1_len + s2_len)
    {
        strptr[index] = s2[index - s1_len];
        index++;
    }
    strptr[index] = '\0';
    return (strptr);
}
