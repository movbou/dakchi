#include "libft.h"
#include <stdlib.h>

int countwords(char *str, char c, int index, int counter)
{
    while (str[index])
    {
        while (str[index] == c)
            index++;
        if (str[index] != 0)
            counter++;
        while (str[index] && str[index] != c)
            index++;
    }
    return counter;
}

char **ft_split(char const *s, char c)
{
    int pointers;
    char **arr;
    int wordlen;
    int i, j, k;

    if (!s)  // Check for NULL input
        return NULL;

    pointers = countwords((char *)s, c, 0, 0);  // Use s directly instead of casting

    if (!(arr = malloc((pointers + 1) * sizeof(char *))))
        return NULL;

    i = 0;
    j = 0;
    while (i < pointers)
    {
        while (s[j] && s[j] == c)
            j++;
        k = j;
        wordlen = 0;
        while (s[k] && s[k] != c)
        {
            k++;
            wordlen++;
        }
        if (!(arr[i] = malloc(wordlen + 1)))
        {
            while (i > 0)
                free(arr[--i]);
            free(arr);
            return NULL;
        }
        k = 0;
        while (s[j] && s[j] != c)
            arr[i][k++] = s[j++];
        arr[i][k] = '\0';
        i++;
    }
    arr[i] = NULL;
    return arr;
}

/*#include <stdio.h>
int main()
{
    int i = 0;
    char **ptr = ft_split("free palestine forever", ' ');

    while (ptr[i] != NULL)
        printf("|%s|\n", ptr[i++]);

    i = 0;
    while (ptr[i] != NULL)
        free(ptr[i++]);
    free(ptr);

    return 0;
}*/
