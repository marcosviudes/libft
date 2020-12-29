/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:41:48 by mviudes           #+#    #+#             */
/*   Updated: 2020/12/28 13:24:44 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_;
	char	*src_;

	src_ = (char *)src;
	dest_ = dest;
	if (!dest || !src || !n)
		return (dest);
	while (n--)
		*dest_++ = *src_++;
	return (dest);
}
