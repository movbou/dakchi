#include "libft.h"

/**
 * ft_strlcat - Concatenates `src` to the end of `dst`, ensuring that there is 
 * enough space in `dst` and that the result is null-terminated.
 * 
 * @dst: The destination string to which `src` will be appended.
 * @src: The source string to append.
 * @dstsize: The size of the destination buffer.
 * 
 * Returns: The total length of the string it tried to create, i.e., the 
 * length of `src` plus the length of `dst`. If `dstsize` is less than the 
 * length of `dst`, the function returns `dstsize + length of src`.
 */
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t srclen;
    size_t destlen;
    size_t index;

    // Get the length of the source and destination strings
    srclen = ft_strlen(src);
    destlen = ft_strlen(dst);

    // there are 3 cases : -> dst buffer full : means that dstsize == destlen so
    //                                          we just return dstsize + srclen
    //                                          which is what we failed to create
    //
    //                     -> dstsize == 0    : we return the length we can
    //                                          creat (srlen + dstsize(which is 0))
    //                     -> dst buffer isn't full : the expected func behavior
           
    if (dstsize == 0 || dstsize <= destlen)
        return srclen + dstsize;

    index = 0;
    // Copy up to dstsize - destlen - 1 bytes from src to dst
    while (src[index] && index < dstsize - destlen - 1)
    {
        dst[destlen + index] = src[index];
        index++;
    }

    // Null-terminate the destination string
    dst[destlen + index] = '\0';

    // Return the length of the final concatenated string
    return (destlen + srclen);
}
