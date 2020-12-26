#include "libft.h"

char *ft_strdup(const char *src)
{
	char	*ret;
	int		len;

	ret = 0;
	len = ft_strlen(src);
	if(!(malloc(sizeof(char) * (len +1))))
		return (0);
	ret = ft_memcpy(ret, src, len);
	return (ret);
}
