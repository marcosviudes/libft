#include "libft.h"

void		*memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*_dst;
	char	*_src;

	_src = (char *)src;
	_dst = dest;

	while(n--)
	{
		*_dst++ = *_src++;
		if(*_src == c)
			return (_dst++);
	}
	return (0);
}
