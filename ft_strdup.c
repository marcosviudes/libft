/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:42:23 by mviudes           #+#    #+#             */
/*   Updated: 2020/12/28 12:54:46 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	char	*ret;
	int		len;

	ret = 0;
	len = ft_strlen(src);
	if (!(malloc(sizeof(char) * (len + 1))))
		return (0);
	ret = ft_memcpy(ret, src, len);
	return (ret);
}
