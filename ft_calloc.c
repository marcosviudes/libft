#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	int	*ptr;

	if(!(ptr = malloc(num * size)))
		return (0);
	return(ft_memset(ptr, 0, (num *size)));
}
