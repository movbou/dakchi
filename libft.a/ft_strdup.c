#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    char  *newstr ;
    char  *holder ;
    
    if (!(holder = (char *)malloc((ft_strlen(s1) + 1))))
            return NULL ;
    newstr = holder ;
    while (*s1)
    *holder++ = *(s1++);
    
    *holder = '\0';
        
    return (newstr);
}
