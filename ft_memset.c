#include "libft.h"

void	*ft_memset(void *s, int c, size_t n){

	char *ret;

	ret = s;
	while(n --> 0)
	{
		*ret++ = c;
	}
	return (ret);
}
