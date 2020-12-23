#include "libft.h"

void					*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*_dest;
	unsigned const char	*_src;

	_dest = (unsigned char *)dest;
	_src = src;
	if(!dest || !src)
		return(dest);
	if(src > dest)
		while (n--)
			*_dest++ = *_src++;
	else
		while (n--)
			_dest[n] = _src[n];
	return (_dest);
}
