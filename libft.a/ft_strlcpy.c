#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  index ;
    size_t  src_len;

    index = 0 ;
    src_len = ft_strlen(src);
    if(dstsize == 0)
        return src_len ;
    while(index < dstsize - 1 && src[index])
    {
        dst[index] = src[index] ;
        index++;
    }
    dst[index] = '\0';
    return (src_len);
}
