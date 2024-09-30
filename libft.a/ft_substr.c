#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

// This function returns a substring of the given string 's' starting 
// from the index 'start' with a maximum length of 'len'.
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;          // Pointer to hold the substring.
    size_t index;       // Index for looping through the substring.
    size_t slen;        // Length of the input string 's'.

    // If the input string 's' is NULL, return NULL.
    if (!s)
        return NULL;

    // Calculate the length of the input string 's'.
    slen = ft_strlen(s);

    // If 'start' is greater than the length of the string, 
    // return an empty string.
    if (start > slen)
        return ft_strdup("");

    // If the requested length 'len' exceeds the length of the remaining 
    // part of the string starting from 'start', adjust 'len'.
    if (len > slen - start)
        len = slen - start;

    // Allocate memory for the substring, including space for the 
    // null terminator. Return NULL if memory allocation fails.
    sub = (char *)malloc(len + 1);
    if (!sub)
        return NULL;

    // Copy characters from the original string 's' starting from 
    // 'start' into the new substring until 'len' characters are copied.
    index = 0;
    while (index < len)
        sub[index++] = s[start++];

    // Null-terminate the substring.
    sub[index] = '\0';

    // Return the newly created substring.
    return sub;
}
