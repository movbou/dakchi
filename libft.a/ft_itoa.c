//#include "libft.h"
#include <stdlib.h>

char    *zerocase(char *buff)
{
    buff[0] = '0' ;
    buff[1] = '\0' ;
    return (buff);
}

char *fill(char *buff, long  nb , int index)
{
    buff[index--] = '\0' ;
    while(nb)
    {
        buff[index--] = nb % 10 + '0' ;
        nb /= 10 ;
    }
    return (buff);
}

char *ft_itoa(int n)
{
    long    nb ;
    int     index ;
    char    *holder ;

    nb = n ;
    index = 0 ;
    while(n)
    {
        n /= 10 ;
        index++;
    }
    if(nb < 0)
        index += 1 ;
    if(!(holder = malloc(index + 1)))
        return NULL ;
    if(nb == 0)
    {
        free(holder);
        if(!(holder = malloc(2)))
                return NULL ;
        return zerocase(holder);
    }
    if(nb < 0)
    {
        holder[0] = '-' ;
        nb = -nb ;
    }
        return fill(holder, nb , index);
}
