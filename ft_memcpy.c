#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *_dest;
	char *_src;
	
	if(!dest || !src || !n)
		return (0);
	_src = (char *)src;
	_dest = dest;
	while(n--)
		*_dest++ = *_src++;
	return (_dest);
}
