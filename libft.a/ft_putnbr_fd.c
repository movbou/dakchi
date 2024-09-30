#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long nb ;

    nb = n; // Use long to handle INT_MIN safely
    if (nb < 0)
    {
        ft_putchar_fd('-', fd); // Print the negative sign
        nb = -nb; // Convert nb to positive
    }

    if (nb > 9)
    {
        ft_putnbr_fd(nb / 10, fd); // Recursive call to handle higher-order digits
    }

    ft_putchar_fd((nb % 10) + '0', fd); // Print the least significant digit
}
