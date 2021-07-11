/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:53:25 by mviudes           #+#    #+#             */
/*   Updated: 2021/07/11 22:43:49 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(unsigned int un)
{
	unsigned int	size;

	size = 1;
	while (un >= 10)
	{
		un /= 10;
		size++;
	}
	return (size);
}

static char	*allocate_str(int size, int n)
{
	char	*str;
	int		i;

	i = 0;
	if (n < 0 )
		i = 1;
	str = (char *)malloc(sizeof(char) * (size + 1 + i));
	if (!str)
		return (NULL);
	return (str);
}

static unsigned int	ft_absolute(int number)
{
	if (number < 0)
		return ((unsigned int)(number * -1));
	return ((unsigned int)number);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	un;
	unsigned int	i;
	unsigned int	size;

	un = ft_absolute(n);
	size = ft_size(un);
	str = allocate_str(size, n);
	if (!str)
		return (NULL);
	if (n < 0 )
	{
		str[0] = '-';
		size++;
	}
	i = size - 1;
	while (un >= 10)
	{
		str[i--] = (char)(un % 10 + '0');
		un /= 10;
	}
	str[i] = (char)(un % 10 + '0');
	str[size] = 0;
	return (str);
}
