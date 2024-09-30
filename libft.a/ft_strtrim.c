#include "libft.h"
#include <stdlib.h>

static int checker(char c, char *str)
{
    int index;

    index = 0;
    while (str[index])
    {
        if (str[index] == c)
            return 1;
        index++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char    *holder;  // Pointer to hold the trimmed result
    int     start;    // Index to track the start of the trimmed string
    int     end;      // Index to track the end of the trimmed string
    int     i;        // Iterator for copying the result

    // Handle NULL input: If either 's1' or 'set' is NULL, return NULL
    if (!s1 || !set)
        return NULL;

    start = 0;  // Initialize start index to 0
    end = ft_strlen(s1) - 1;  // Set end index to the last character of 's1'

    // Trim from the start: Move 'start' forward while the character at 's1[start]'
    // exists in the 'set' string
    while (s1[start] && checker(s1[start], (char *)set))
        start++;

    // Trim from the end: Move 'end' backward while the character at 's1[end]'
    // exists in the 'set' string and ensure 'end' doesn't go below 'start'
    while (end >= start && checker(s1[end], (char *)set))
        end--;

    // Allocate memory for the trimmed string, including space for the null terminator
    holder = (char *)malloc((end - start + 2) * sizeof(char));
    if (!holder)  // If memory allocation fails, return NULL
        return NULL;

    // Copy the trimmed part of 's1' into 'holder'
    i = 0;
    while (start <= end)
        holder[i++] = s1[start++];
    
    holder[i] = '\0';

    return holder;
}
