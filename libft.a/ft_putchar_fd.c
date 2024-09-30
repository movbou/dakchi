#include "libft.h"

/* This function uses the system call write to output a single character 
to the specified file descriptor */

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c ,1);
}
