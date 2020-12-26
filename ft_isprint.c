#include "libft.h"

int		isprint(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);
}
