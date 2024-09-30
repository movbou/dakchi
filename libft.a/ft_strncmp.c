#include "libft.h"
#include <stddef.h> // Required for the definition of 'size_t'

// Function to compare up to 'n' characters of two strings 's1' and 's2'
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t index;

    // If n is 0, there's no need to compare anything, so return 0 (strings are considered equal)
    if (n == 0)
        return 0;

    index = 0;

    // Loop through both strings while:
    // 1. The current characters in both strings are not null (i.e., neither string has ended)
    // 2. The characters at the current index are equal
    // 3. The index is still less than n
    while ((s1[index] && s2[index])
           && s1[index] == s2[index]
           && index < n - 1)
        index++;

    // After the loop, either a difference was found or we reached the end of one of the strings
    // The difference between the current characters is returned
    // Cast to 'unsigned char' to handle character comparisons correctly (to avoid negative values)
    return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
