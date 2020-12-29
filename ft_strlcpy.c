/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:42:46 by mviudes           #+#    #+#             */
/*   Updated: 2020/12/28 12:57:14 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		len;

	size++;
	if (!src || !dst)
		return (0);
	len = ft_strlen(src);
	/*while(size--)
	{
		
	}*/
	return (len);
}
