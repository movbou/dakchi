#include "libft.h"
#include <stddef.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t index;
    size_t searcher;

    index = 0;

    // If little is an empty string, return the full big string
    if (little[0] == '\0')
        return (char *)big;

    // Loop through big up to 'len' characters
    while (big[index] && index < len)
    {
        searcher = 0;

        // Compare big substring with little while within bounds
        while (big[index + searcher] == little[searcher] &&
               (index + searcher) < len &&
               little[searcher] != '\0') // Check for end of little
        {
            searcher++;
        }

        // If the entire little string is found, return the starting position
        if (little[searcher] == '\0')
            return (char *)(big + index);

        index++;
    }

    // If little is not found, return NULL
    return NULL;
}

