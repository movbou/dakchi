#include "libft.h"
/*
 * Function: ft_striteri
 * ---------------------
 * Applies the function `f` to each character of the string `s`. 
 * The function `f` is applied to the character and its index in the string.
 * 
 * Parameters:
 *   - s: The string on which to iterate.
 *   - f: The function to apply to each character. 
 *        It takes the current index and a pointer to the character as arguments.
 * 
 * Returns:
 *   - None. The function operates on the string in place.
 */
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int index;

    index = 0;
    while (s[index])
    {
        // Call the function `f`, passing the current index and the address of the character `s[index]`
        (*f)(index, &s[index]);
        index++;
    }
}
