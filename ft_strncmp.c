#include "libft.h"

int		strncmp(const char *s1, const char *s2, size_t n)
{
	const char	*_s1;
	const char	*_s2;

	_s1 = s1;
	_s2 = s2;
	while(n--)
	{
		if(*_s1++ != *_s2++)
			return(*_s1 - *_s2);
		if(*_s1 == '\0')
			return (0);
	}
	return (0);
}
