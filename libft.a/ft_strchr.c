#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char *first_acc = (char *)s;

    while (*first_acc != (char)c)
    {
        if (*first_acc == '\0') //yla c makanch f string dyali ghandkhlo 7it 
                                //*first acc != c (but fach c = '\0' ma ghandkhloch aslen & we will return pointer to c which is '\0')
            return NULL;
        first_acc++;
    }
    return first_acc;
}

