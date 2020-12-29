/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviudes <mviudes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:41:55 by mviudes           #+#    #+#             */
/*   Updated: 2020/12/28 13:46:49 by mviudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_;
	unsigned const char	*src_;

	dest_ = (unsigned char *)dest;
	src_ = src;
	if (!dest || !src)
		return (dest);
	if (src > dest)
		while (n--)
			*dest_++ = *src_++;
	else
		while (n--)
			dest_[n] = src_[n];
	return (dest);
}
