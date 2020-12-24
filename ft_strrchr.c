#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*ret;

	while(*s++)
		if (*s == c)
			ret = (char *)s;
	return (ret);
}
