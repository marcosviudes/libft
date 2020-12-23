#include "libft.h"

void		*memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*_dest;
	char	*_src;

	_src = (char *)src;
	_dest = dest;

	while(n--)
	{
		*_dest++ = *_src++;
		if(*_src == c)
			return (&_dest++);
	}
	return (0);
}
