/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 13:41:41 by mviudes           #+#    #+#             */
/*   Updated: 2021/05/12 22:11:15 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*s2;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	s2 = malloc((i + 1) * sizeof(char));
	if (!(s2))
		return (0);
	while (j < i)
	{
		s2[j] = src[j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
