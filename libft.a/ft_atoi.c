#include "libft.h"

int ft_atoi(const char *nptr)
{
    int     index ;
    int     accum ;
    int     sign ;

    index = 0 ;
    while((nptr[index] >= 9 && nptr[index] <= 13) || nptr[index] == 32)
        index++;
    
    sign = 1 ;
    if (nptr[index] == '-' || nptr[index] == '+')
    {
        if ( nptr[index] == '-' )
            sign *= -1 ;
        index++;
    }
    accum = 0 ;
    while(nptr[index] >= '0' && nptr[index] <= '9')
        accum = accum * 10 + nptr[index++] - '0' ;
    return (accum * sign);
}
/*#include <stdlib.h>
#include <stdio.h>
int main (int ac ,char **av)
{
    (void)ac ;
    printf("mine : %d\n",ft_atoi(av[1]));
    printf("theirs : %d\n", atoi(av[1]));
}*/
