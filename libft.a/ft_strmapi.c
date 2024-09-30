#include "libft.h"
#include <stdlib.h>

/*
 * Function: ft_strmapi
 * ---------------------
 * Applies the function `f` to each character of the string `s` to create a new
 * string (with malloc) resulting from successive applications of `f`.
 * 
 * Parameters:
 *   - s: The string on which to iterate.
 *   - f: The function to apply to each character of the string.
 * 
 * Returns:
 *   - A new string resulting from the successive applications of `f`.
 *   - NULL if the allocation fails or if `s` or `f` is NULL.
 * 
 * The function `f` takes the index of the character as its first argument
 * and the character itself as its second argument.
 */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int index;
    unsigned int slen;
    char *holder;

    // Check if the input string `s` or the function pointer `f` is NULL
    if (!s || !f)
        return NULL;

    index = 0;
    slen = ft_strlen(s);

    holder = (char *)malloc(slen + 1);
    if (!holder) 
        return NULL;

    while (s[index])
    {
        // Apply the function `f` to the character at the current index and store the result
        holder[index] = (*f)(index, s[index]);
        index++;
    }

    holder[index] = '\0';

    return (holder);
}

/*char    uppodd(unsigned int index , char schar)
{
    if(index % 2 == 0)
        if(schar > 'Z')
            schar -= 32 ;
    return schar ;
}
c
#include <stdio.h>
int main ()
{
    printf("%s\n",ft_strmapi("abcdefghijklmnopqrstuvwxyz",&uppodd));
}*/
