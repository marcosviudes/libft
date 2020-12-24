#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		src_len;
	size_t		dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len == size)
		return (dst_len + size);
	if (src_len < size - dst_len)
		ft_memcpy(dst + dst_len, src, src_len +1);
	else
	{
		ft_memcpy(dst + dst_len, src, size - 1);
		dst[dst_len + size - 1] = '\0';
	}
	return (dst_len + src_len);
}
